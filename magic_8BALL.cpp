#include <iostream>
#include <cstdlib>

int main() {
	std::cout << "MAGIC 8-BALL:\n";
	srand(time(NULL));
	int answer = std::rand() % 10;
	if(answer == 0) {
		std::cout << "It is certain.\n";
	}
	else if(answer == 1) {
		std::cout << "Signs point to yes.\n";
	}
	else if(answer == 2) {
		std::cout << "Concentrate and ask again.\n";
	}
	else if(answer == 3) {
		std::cout << "You may rely on it.\n";
	}
	else if(answer == 4) {
		std::cout << "Cannot predict now.\n";
	}
	else if(answer == 5) {
		std::cout << "Yes.\n";
	}
	else if(answer == 6) {
		std::cout << "My reply is no.\n";
	}
	else if(answer == 7) {
		std::cout << "Don't count on it.\n";
	}
	else if(answer == 8) {
		std::cout << "Ask again later.\n";
	}
	else if(answer == 9) {
		std::cout << "No.\n";
	}
	else {
		std::cout << "Very doubtful.\n";
	}
}
