#include <iostream>

using namespace std;
//we declare and define our function
void pass_by_ref(int &param) {
	//since we are passing by reference we include & symbol before param
	//we log current result of param
	cout << "param: " << param << endl;
	//we increase param
	param++;
	//we log the result again, it has gone up
	cout << "param: " << param << endl;
}
//we declare and define our main function
int main(void) {
	//we create var1 to hold the value of one
	int var1 = 1;
	//we display var1 value
	cout << "var1: " << var1 << endl;
	//we invoke our pass_by_ref function with var1 as the pass by reference value
	pass_by_ref(var1);
	//we display var1 ending value, it is two
	cout << "var1: " << var1 << endl;
	//we return zero
	return 0;
}
