#include "card.h"
Card::Card() {
	m_suit = CARD_DIAMONDS;
	m_rank = CARD_2;
}
Card::Card(CardRank f_rank, CardSuits f_suit) {
	m_rank = f_rank;
	m_suit = f_suit;
}