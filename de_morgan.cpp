#include <iostream>

using namespace std;

int main(void) {
	int p;
	int q;
	p = 0;
	q = 0;
	if(!(p && q) == !p || !q) {
		cout << "Hello world" << endl;
	}
	else {
		cout << "Meh..." << endl;
	}
}
