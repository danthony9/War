// IN PROGRESS
#pragma once
#include <iostream>
#include <string>
using namespace std;

const enum Rank { TWO = 2, THREE, FOUR, FIVE, SIX, 
SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING, ACE };
const enum Suite { CLUBS, DIAMONDS, HEARTS, SPADES };

class Card{
	Rank _rank;
	Suite _suite;
public:
	void setRank(int r){ _rank = static_cast<Rank>(r); }
	void setSuite(int s){ _suite = static_cast<Suite>(s); }
	Rank getRank(){ return _rank; }
	Suite getSuite(){ return _suite; }
};

class Deck{
	Card _card[52];
public:
	Deck(){
		int i = 0;
		for (int s = 0; s < 4; s++){
			for (int r = 2; r < 13; r++){
				_card[i].setRank(r);
				_card[i].setSuite(s);
				i++;
			}
		}
	}
	~Deck(){}
	void printDeck(){
		for (int i = 0; i < 52; i++){
			cout << _card[i].getRank() << " of " << 
				_card[i].getSuite() << endl;
		}
	}
};
