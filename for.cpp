#include <iostream>

int main() {

	for(int i = 99; i > 0; i--) {
		std::cout << i << " bottles of beer on the wall.\n";
		std::cout << i << " bottles of beer.\n" << "Take one down, pass it around\n";
		std::cout << i - 1 << " bottles of beer on the wall\n";
	}
}
