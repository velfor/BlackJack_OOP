#include <iostream>
#include "card.h"
#include "deck.h"
using namespace std;
int main() {
	Deck my_deck;//конструктор по умолчанию (без параметров)
	my_deck.print_deck();
	return 0;
}