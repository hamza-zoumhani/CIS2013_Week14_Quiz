#include <iostream>
#include <string>
#include "player.cpp"

using namespace std;

int main(){
	char hORs;
	string player1;
	string suites[] = { "Diamonds", "Clubs","Spades", "Hearts"};
	card deck[52];
	player dealer;
	player player;
	
	dealer.set_name("Dealer");
	cout << "Enter the name of the Player: ";
	cin>> player1;
	player.set_name(player1);
	
	//Populate deck of cards
	for(int i=0; i<4; i++){
		string s = suites[i];
		deck[i].set_suite(s);
	}
	
	cout << "Dealer has a A of Diamonds, and a 5 of Clubs" << endl;
	cout << player1 << " has a A of Spades, and a K of Hearts" << endl;
	cout << "(h)it or (s)tay: ";
	cin >> hORs;
	player.set_hitting(hORs);
	
	return 0;
}