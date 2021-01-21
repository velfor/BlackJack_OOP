#include <iostream>
#include "card.h"
#include "deck.h"
#include "hand.h"
#include "player.h"
#include "dealer.h"
using namespace std;
int main() {
	Deck my_deck;//������� ������
	my_deck.shuffle();//������ ������
	//my_deck.print_deck();
	//bool play = true;
	Player player1;//������� ������
	Dealer dealer;//������� ������
	Hand::GameStatus currentGameStatus = Hand::GAME_CONTINUE;
	//while(play)
	while (true) {
		//
		player1.play(my_deck);
		currentGameStatus = player1.checkGameStatus();
		/*
		//����� ������ ����� switch, �� ����� ���� ���������
		//��� ��������� ������� ����
		switch(currentGameStatus){
			case Hand::GAME_WIN: play = false; break;
			case Hand::GAME_LOSE: break;
			case Hand::GAME_CONTINUE:
			switch(currentGameStatus){
				case Hand::GAME_WIN: break;
				case Hand::GAME_LOSE: break;
				case Hand::GAME_CONTINUE:
		}
		*/
		//��������� ��� ������ �����
		//������ 21 - ������� �����
		if (currentGameStatus == Hand::GAME_WIN) {
			cout << "Player1 win!" << endl;
			break;
		}
		else
			//������� - ����� ��������
			if (currentGameStatus == Hand::GAME_LOSE) {
				cout << "Player1 lose!" << endl;
				break;
			}
			else
				//����� ������ ������ 21 ����, ������ �����
				if (currentGameStatus == Hand::GAME_CONTINUE) {
					//����� �������� ����� � ����
					dealer.play(my_deck);
					currentGameStatus = dealer.checkGameStatus();
					//���������, ��� ������ �����
					//���� ����� ������ �� 17 �� 20 �����
					if (currentGameStatus == Hand::GAME_CONTINUE) {
						//��������� ���� ������ � ������
						int playerScore = player1.calculateScore();
						int dealerSCore = dealer.calculateScore();
						//� ������ ������ ����� - ������� �����
						if (playerScore > dealerSCore) {
							cout << "Player1 win!" << endl;
							break;
						}
						//� ������ ������ - ������� �����
						if (dealerSCore > playerScore) {
							cout << "Dealer win!" << endl;
							break;
						}
						//������� - �����
						if (dealerSCore == playerScore) {
							cout << "Draw!" << endl;
							break;
						}
					}
					else
						//� ������ 21 ����� - ����� �������
						if (currentGameStatus == Hand::GAME_WIN) {
							cout << "Dealer win!" << endl;
							break;
						}
						else
							//� ������ ������� - ����� ��������
							if (currentGameStatus == Hand::GAME_LOSE) {
								cout << "Dealer lose!" << endl;
								break;
							}
				}
	}
	return 0;
}