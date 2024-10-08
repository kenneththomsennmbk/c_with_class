#include <iostream>
using namespace std;

int main(void) {
	//we declare our variable
	int c = 34;
	//we use the sizeof operator to return how many bytes the variable occupies
	int i = sizeof(c);
	//we display the occupied amount of bytes to the terminal
	cout << i << " \n" << endl;
	return 0;
}
