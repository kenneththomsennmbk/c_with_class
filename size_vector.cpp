#include <iostream>
#include <vector>

int main() {
	std::vector<std::string> important_names = {"Fibonacci", "Faraday", "Franklin"};

	for(int i = 0; i < important_names.size(); i++) {
		std::cout << important_names[i] << "\n";
	}
}
