#ifndef CARD_CPP
#define CARD_CPP

#include <string>
#include "card.cpp"

using namespace std;

class player{
	private:
		
		string name;
		bool is_hitting;
		card hand[9];
		
	public:
		
		//Constructors
		
		player(){
			set_name("Unknown");
			set_hitting(true);
		}
		
		//Setters
		void set_name(string n){name =n;}
		void set_hitting(bool h){is_hitting=h;}
		
		//Getters
		string get_name(){ return name;}
		
};
#endif			
		
		