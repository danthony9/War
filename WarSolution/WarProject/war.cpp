//
#include "card.h"
#include "deck.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
	Deck deck;
	deck.printDeck();
	cout << "-----------------------------------------------------" << endl;
	deck.shuffleDeck();
	deck.printDeck();

	cin.ignore();
	cin.get();
	return 0;
}