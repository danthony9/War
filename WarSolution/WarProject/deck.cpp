//
#include "deck.h"
#include <iostream>
#include <string>
using namespace std;

void Deck::printDeck(){
	for (int i = 0; i < 52; i++){
		cout << _card[i].rankToString() << " of " <<
			_card[i].suiteToString() << endl;
	}
}
void Deck::shuffleDeck(){} //WIP
Deck::Deck(){
	int i = 0;
	for (int s = CLUBS; s <= SPADES; s++){
		for (int r = TWO; r <= ACE; r++){
			_card[i].setRank(r);
			_card[i].setSuite(s);
			i++;
		}
	}
}