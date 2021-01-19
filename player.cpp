#include "player.h"
#include <iostream>
void Player::play(Deck& fDeck) {
    char choice = 'y';
    while (choice != 'n') {
        //взять карту из колоды в руку
        takeOneCard(fDeck);
        //печатаем руку
        printHand();
        //выводим счет и просим пользователя принять решение
        //о ходе игры (продолжить или нет)
        std::cout << "Your score is " << calculateScore() << std::endl;
        std::cout << "Do you want another card?";
        std::cout << " (enter your choice, y - yes, n - no) ";
        //считываем выбор пользователя
        std::cin >> choice;
    }
}