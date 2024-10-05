#include <iostream>
#include "song.hpp"

int main() {

	Song electric_relaxation;
	electric_relaxation.add_title("Somewhere Only We Know");
	std::cout << electric_relaxation.get_title();
}
