//
#pragma once
#include "card.h"
#include <iostream>
#include <string>
using namespace std;

class Deck{
	Card _card[52];
	void swap(Card& first, Card& second);
public:
	//const int Size = 52;
	void printDeck() const;
	void shuffleDeck();
	Deck();
	~Deck(){}
};