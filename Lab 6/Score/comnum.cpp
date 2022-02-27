#include <stdio.h>
#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;

int t =0;
int n =0;
int val = 0;

void comment_end(int i, int nm, string prgm)
{
    t=0;
    for (int p=i; p<nm; p++)
    {
        if (prgm[p] == '\n' && prgm[p+1] != '\n')
        {
            t++;
        }
        else if (prgm[p] == '*')
        {
            if (prgm[p+1] == '/')
            {
                t++;
                val = p;
                break;
            }
        } 
    }
    // printf("%d\n",t );
}

int main(int argc, char* argv[])
{
    char ch;
    string prgm = "";
    fstream fp;
    string fileName = argv[1];
    fp.open(fileName, fstream::in);
    if(!fp)
    {
        cout<<"\nError Occurred!";
        return 0;
    }
    // cout<<"\nContent of "<<fileName<<":-\n";
    while(fp>>noskipws>>ch)
    {
        // cout<<ch;
        prgm = prgm + ch;
    }
    fp.close();

    int nm = prgm.length();
    for (int i=0; i<nm; i++)
    {
        if (prgm[i] == '/')
        {
            if (prgm[i+1] == '/')
            {
                n++;
            }

            if (prgm[i+1] == '*')
            {
                comment_end(i, nm, prgm);
                n=n+t;
                i = val;
            }
        } 
    }
    printf("%d\n", n);
}