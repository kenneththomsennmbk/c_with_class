#include <iostream>
#include <filesystem>

using namespace std::filesystem;

int main(void) {
	std::cout << current_path();
	return 0;
}
