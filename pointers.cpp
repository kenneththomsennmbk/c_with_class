#include <iostream>
using namespace std;

int main(void) {
	//we declare an ivar variable and our *ptr
	int ivar;
	int *ptr;
	//we set ivar assign two to ivar
	//we also set *ptr to point to the memory location of ivar
	ivar = 2;
	ptr = &ivar;
	//we print the memory location to the terminal
	cout << ptr << endl;
}
