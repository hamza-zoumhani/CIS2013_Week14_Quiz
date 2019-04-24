#include <iostream>
#include <string>

using namespace std;

class player{
	private:
		
		int Ncards[12];
		string name;
		int Cardcount;
		
	public:
		
		player{
			set_name("Unknown");
			set_Ncards("0");
			set_Cardcount("0");
		}
		player(string n, int Nc, int c){
			set_name("Unknown");
			set_Ncards("0");
			set_Cardcount("0");
		
			
		
		