//
#pragma once
#include "card.h"
#include <iostream>
#include <string>
using namespace std;

class Deck{
	Card _card[52];
public:
	void printDeck();
	void shuffleDeck();
	Deck();
	~Deck(){}
};