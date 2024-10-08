#include <iostream>
using namespace std;

int main(void) {
	//we declare our pointer p
	int *p;
	//we declare our variable we will later point to
	int ivar = 3;
	//we assign the variable to our pointer
	p = &ivar;
	//we dereference the pointer to display the value of the pointed variable
	cout << *p << " \n" << endl;
	return 0;
}
