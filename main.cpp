#include <iostream>
#include <string>

using namespace std;

int main(){
	char hOrs;
	string player1;
	cout << "Enter the name of the Player: ";
	cin>> player1;
	
	cout << "Dealer has a A of Diamonds, and a 5 of Clubs" << endl;
	cout << player1 << " has a A of Spades, and a K of Hearts" << endl;
	cout << "(h)it or (s)tay: ";
	cin >> hOrs;
	
	return 0;
}