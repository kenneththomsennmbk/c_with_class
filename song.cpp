#include "song.hpp"

//and we add method definitions below:

void Song::add_title(std::string new_title) {

	title = new_title;

}

std::string Song::get_title() {
	
	return title;
}
