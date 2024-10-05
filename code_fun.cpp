#include <iostream>

int main() {
	for(int i = 0; i <= 101; i++) {
		if(i % 3 == 0 && i % 5 == 0) {
			std::cout << "CodeFun!!!\n";
		}
		else if(i % 3 == 0) {
			std::cout << "Code\n";
		}
		else if(i % 5 == 0) {
			std::cout << "Fun!\n";
		}
		else {
			std::cout << i << "\n";
		}
	}
}
