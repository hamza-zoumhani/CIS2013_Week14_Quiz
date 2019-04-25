#include <iostream>
#include <string>
#include "player.cpp"

using namespace std;

int main(){
	char hORs;
	string player1;
	string suites[] = { "Diamonds", "Clubs","Spades", "Hearts"};
	char vals[] = {'A','1','2','3','4','5','6','7','8','9','T','J','Q','K'};
	card deck[52];
	player dealer;
	player player;
	
	//Create users
	dealer.set_name("Dealer");
	cout << "Enter the name of the Player: ";
	cin>> player1;
	player.set_name(player1);
	
	//Populate deck of cards
	int cnt = 0;
	for(int i=0; i<4; i++){
		string s = suites[i];
		for(int j=0; j<13; j++){
			char v = vals[j];
			deck[cnt].set_value(v);
			deck[cnt].set_suite(s);
			cnt++;
		}
	}
	
	cout << "Dealer has a A of Diamonds, and a 5 of Clubs" << endl;
	cout << player1 << " has a A of Spades, and a K of Hearts" << endl;
	cout << "(h)it or (s)tay: ";
	cin >> hORs;
	player.set_hitting(hORs);
	
	cout << "Printer our deck of cards" << endl;
	for (int i=0; i<52; i++){
		cout << "Card number " << i << " is a " << deck[i].get_value() << " of " << deck[i].get_suite() << endl;
	}
	

	
	return 0;
}