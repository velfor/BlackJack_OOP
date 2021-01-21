#include "dealer.h"
#include <iostream>
void Dealer::play(Deck& fDeck){
	//дилер берет карты, пока не наберет 17 очков или больше
	//пока счет меньше 17
	do {
		//берем карту
		takeOneCard(fDeck);
	} while (calculateScore() < 17);
	printHand();
}