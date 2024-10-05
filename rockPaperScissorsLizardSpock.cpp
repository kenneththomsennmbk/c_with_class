/*This program determines the winner between computer and player in regard to rock, paper, scissors, lizard, spock.
 Rock crushes scissors, paper disproves spock, lizard eats paper, scissors decapitate lizard, rock crushes lizard, lizard
 poisons spock, spock vaporizes rock, spock smashes scissors, scissors cuts paper, paper covers rock.*/

#include <iostream>
#include <stdlib.h>

int main() {
	srand(time(NULL));
	int computer = rand() % 3 + 1;

	int user = 0;

	std::cout << "==================================\n";
	std::cout << "rock paper scissors lizard spock!\n";
	std::cout << "==================================\n";

	std::cout << "1) rock\n";
	std::cout << "2) paper\n";
	std::cout << "3) scissors\n";
	std::cout << "4) lizard\n";
	std::cout << "5) spock\n";

	std::cout << "shoot!";

	std::cin >> user;

	switch(user) {
		case 1:
			if(computer == 3) {
				std::cout << "rock crushes scissors, you win!\n";
				break;
			}else if(computer == 1) {
				std::cout << "rock rock, Tie!\n";
				break;
			}else if(computer == 2) {
				std::cout << "paper covers rock, you lose!\n";
				break;
			}else if(computer == 4) {
				std::cout << "rock crushes lizard, you win!\n";
				break;
			}else if(computer == 5) {
				std::cout << "spock vaporizes rock, you lose!\n";
				break;
			}else {
				break;
			}
		case 2:
			if(computer == 1) {
				std::cout << "paper covers rock, you win!\n";
				break;
			}else if(computer == 2) {
				std::cout << "paper paper, Tie!\n";
				break;
			}else if(computer == 3) {
				std::cout << "scissors cuts paper, you lose!\n";
				break;
			}else if(computer == 4) {
				std::cout << "lizard eats paper, you lose!\n";
				break;
			}else if(computer == 5) {
				std::cout << "paper disproves spock, you win!\n";
				break;
			}else {
				break;
			}
		case 3:
			if(computer == 1) {
				std::cout << "rock smashes scissors, you lose!\n";
				break;
			}else if(computer == 2) {
				std::cout << "scissors cuts paper, you win!\n";
				break;
			}else if(computer == 3) {
				std::cout << "scissors scissors, Tie!\n";
				break;
			}else if(computer == 4) {
				std::cout << "scissors decapitate lizard, you win!\n";
				break;
			}else if(computer == 5) {
				std::cout << "spock smashes scissors, you lose!\n";
				break;
			}else {
				break;
			}
		case 4:
			if(computer == 1) {
				std::cout << "rock crushes lizard, you lose!\n";
				break;
			}else if(computer == 2) {
				std::cout << "lizard eats paper, you win!\n";
				break;
			}else if(computer == 3) {
				std::cout << "scissors decapitate lizard, you lose!\n";
				break;
			}else if(computer == 4) {
				std::cout << "lizard lizard, Tie!\n";
				break;
			}else if(computer == 5) {
				std::cout << "lizard poisons spock, you win!\n";
				break;
			}else {
				break;
			}
		case 5:
			if(computer == 1) {
				std::cout << "spock vaporizes rock, you win!\n";
				break;
			}else if(computer == 2) {
				std::cout << "paper disproves spock, you lose!\n";
				break;
			}else if(computer == 3) {
				std::cout << "spock smashes scissors, you win!\n";
				break;
			}else if(computer ==4) {
				std::cout << "lizard poisons spock, you lose!\n";
				break;
			}else if(computer == 5) {
				std::cout << "spock spock, Tie!\n";
				break;
			}else {
				break;
			}
		default:
			std::cout << "Please make a number selection\n";
			break;
	}

}
