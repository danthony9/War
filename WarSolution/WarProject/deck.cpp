//
#include "deck.h"
#include <time.h>
#include <iostream>
#include <string>
using namespace std;

void Deck::printDeck(){
	for (int i = 0; i < 52; i++){
		cout << _card[i].rankToString() << " of " <<
			_card[i].suiteToString() << endl;
	}
}

void Deck::shuffleDeck(){
	//Card temp1, temp2;
	//int min = 1, max = 51, r;
	srand(time(0));
	for (int i = 0; i < 52; i++){
		//r = rand() % (max - min + 1) + min;
		swap(_card[i], _card[rand() % 52]);
	}
		/*temp1.setRank(_card[i].getRank());
		temp1.setSuite(_card[i].getSuite());
		temp2.setRank(_card[r].getRank());
		temp2.setSuite(_card[r].getSuite());
		_card[i].setRank(temp2.getRank());
		_card[i].setSuite(temp2.getSuite());
		_card[r].setRank(temp1.getRank());
		_card[r].setSuite(temp1.getSuite());
		min++;
	}*/
}
void Deck::swap(Card& first, Card& second) {
	auto temp = first;
	first = second;
	second = temp;
}

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