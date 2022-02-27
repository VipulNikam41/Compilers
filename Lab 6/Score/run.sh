g++ -o comment comnum.cpp
> cal.txt

for i in "$@"
do
	echo $i
	echo $i >> cal.txt
	echo "Total Line:"
	python3 line_count.py $i
	python3 line_count.py $i "   " >> cal.txt

	echo "Comments:"
	./comment $i 
	./comment $i >> cal.txt

	echo 

done

python3 percent.py cal.txt