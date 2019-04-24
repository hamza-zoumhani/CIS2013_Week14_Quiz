#include <iostream>
#include <string>

using namespace std;

class card{
	private:
	
		char suit;
		char value;
		int weight;
		bool is_used;
		
	public:
		
		void assignValues(char suit, char value);
		void print();
		void weight();
		
};