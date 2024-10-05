#include <iostream>

std::string make_sandwich(std::string ing1, std::string ing2) {
	std::string sandwich = "";

	sandwich += "bread\n";
	sandwich += ing1 + "\n";
	sandwich += ing2 + "\n";
	sandwich += "bread\n";

	return sandwich;
}

int main() {
	std::cout << make_sandwich("peanut butter", "jelly");
}
