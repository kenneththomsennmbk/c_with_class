#include <iostream>
#include <vector>

int main() {
	std::vector<std::string> hello_guhbye;

	hello_guhbye = {"hello", "world", "goodbye"};
	hello_guhbye.pop_back();
	hello_guhbye.push_back("I adore you...");
	std::cout << hello_guhbye[0] << " " << hello_guhbye[1] << "\n";
	std::cout << hello_guhbye[2] << "\n";
}
