#pragma once
#include "hand.h"
#include "deck.h"
#include <vector>
class Player:public Hand {
public:
	void play(Deck&);
};