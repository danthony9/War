//
#include "card.h"
#include <iostream>
#include <string>
using namespace std;

string Card::rankToString(){
	switch (_rank){
	case 2: return "TWO";
	case 3: return "THREE";
	case 4: return "FOUR";
	case 5: return "FIVE";
	case 6: return "SIX";
	case 7: return "SEVEN";
	case 8: return "EIGHT";
	case 9: return "NINE";
	case 10: return "TEN";
	case 11: return "JACK";
	case 12: return "QUEEN";
	case 13: return "KING";
	case 14: return "ACE";
	}
}
string Card::suiteToString(){
	switch (_suite){
	case 0: return "CLUBS";
	case 1: return "DIAMONDS";
	case 2: return "HEARTS";
	case 3: return "SPADES";
	}
}

Card& Card::operator=(const Card& rhs) {
	_rank = rhs.getRank();
	_suite = rhs.getSuite();
	return *this;
}
