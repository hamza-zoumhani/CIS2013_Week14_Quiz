#ifndef CARD_CPP
#define CARD_CPP

#include <string>

using namespace std;

class card{
	
	private:
	
		string suite;
		char value;
		int weight;
		bool is_used;
		
		void set_weight(char w){
			switch(w){
				case 'A':
					weight=11;
					break;
				case 'J'|| 'Q' || 'K' || 'T':
					weight=10;
					break;
				default:
					weight = (int)w;
			}
		}
		
	public:
		
		//Setters
		void set_suite(string s){suite=s;}
		void set_value(char v){
			value=v;
			set_weight(v);
		}
		
		void set_used(bool u){is_used=u;}
		
		//Getters
		string get_suite(){ return suite;}
		char get_value(){ return value;}
		int get_weight(){ return weight;}
		bool get_used(){ return is_used;}
};
#endif