#include <iostream>

void name_x_times(std::string name, int x) {
	while(x > 0) {
		std::cout << name << "\n";
		x--;
	}
}

int main() {

	std::string my_name = "kenji hahoshi!";
	int some_number = 3;
	name_x_times(my_name, some_number);
}
