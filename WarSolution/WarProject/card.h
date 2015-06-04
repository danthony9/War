//
#pragma once
#include <iostream>
#include <string>
using namespace std;

enum Rank{
	TWO = 2, THREE, FOUR, FIVE, SIX,
	SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING, ACE
};
enum Suite{
	CLUBS, DIAMONDS, HEARTS, SPADES
};
class Card{
	Rank _rank;
	Suite _suite;

	
public:
	void setRank(int r){ _rank = static_cast<Rank>(r); }
	void setSuite(int s){ _suite = static_cast<Suite>(s); }
	Rank getRank() const { return _rank; }
	Suite getSuite() const { return _suite; }
	Card& operator=(const Card& rhs);
	string rankToString() const;
	string suiteToString() const;
};
