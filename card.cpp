#include <iostream>
#include <string>

using namespace std;

class card{
	private:
	
		string suite;
		char value;
		int weight;
		bool is_used;
		
	public:
		
		//Setters
		void set_suite(string s){suite=s;}
		void set_value(char v){value=v;}
		void set_weight(int w){weight=w;}
		void set_used(bool u){is_used=u;}
		
		//Getters
		string get_suite(){ return suite;}
		char get_value(){ return value;}
		int get_weight(){ return weight;}
		bool get_used(){ return is_used;}
		
		
};