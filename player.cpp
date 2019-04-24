#include <iostream>
#include <string>

using namespace std;

class player{
	private:
		
		int Ncards[12];
		string name;
		int Cardcount;
		
	public:
		
		player(string n, int Nc, int cc){
			set_name(n);
			set_Ncards(Nc);
			set_Cardcount(cc);
		}
		
		string get_name(){ return name;};
		int get_Ncards(){ return Ncards};
		int get_Cardcount(){ return Cardcount};
		
		void 
		
			
		
		