#include <iostream>

using namespace std;
//we introduce our function to pass by value to our main
//we give it a single param
void pass_by_val(int anum) {
	//we show what anum is currently
	cout << "anum: " << anum << endl;
	//we increase anum
	anum++;
	//we output anum again
	cout << "anum: " << anum << endl;
}

int main(void) {
	//we create a variable
	int var1 = 1;
	//we set the variable to the invocation param
	pass_by_val(var1);
	cout << "anum: " << var1 << endl;
	//we have passed by value
	return 0;
}
