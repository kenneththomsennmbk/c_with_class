#include <iostream>

using namespace std;

int main(void) {
	int pow = 1;

	for(int exp = 0; exp < 13; exp++) {
		cout << "2 to the power of " << exp << " is " << pow << endl;
		pow *= 2;
	}
	return 0;
}
