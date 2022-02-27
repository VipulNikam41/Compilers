/*
 *  Acknowledgement(s): (Akshat Karani, Zixian Lai)
 */
#ifndef SCOPE_H
#define SCOPE_H
#include <string>
#include <utility>
#include <algorithm>
#include <map>
#include <vector>
#include "Symbol.h"


namespace std{
	class Scope
	{
	private:
		string name;// name of scope
	 	//std::map<Symbol*, int> ScopeTab;
	 	std::map< string, Symbol*> ScopeTab; // mapping from var_name to symbol object in current scope
	 	//std::map< string* , std::pair <Symbol*, int>> ScopeTab;
	 	std::vector<std::string> err_checker; // to check error in declaration
	public:
		Scope(string name_v); // contructor
		virtual ~Scope(); // destructor
		string get_name(); // returns name of scope
		//std::map<Symbol*, int> get_tab();
		std::map< string, Symbol*> get_tab(); // returns mapping ScopeTab
		//std::map<string* , std::pair <Symbol*, int>> get_tab();
		void insert_record(string ,Symbol*); // inserts a record in ScopeTab
		//void insert_record(string* ,Symbol*, int);

	};
}
#endif
