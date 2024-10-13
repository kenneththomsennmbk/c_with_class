#include <iostream>

using namespace std;
//below we make two functions with the same name
int play_with_num(int x) {
	return x * 2;
}
//however, the return types and parameters are different
float play_with_num(float x) {
	return x * 3;
}
//notice we put an f after the one point zero below
//this satisfies the compiler looking for a float
int main(void) {
	float result;
	float var = 1.0f;
	int result2;
	int var2 = 1;
	result = play_with_num(var);
	result2 = play_with_num(var2);
	//we have successfully overloaded a function with possibility
	//we display the results
	cout << "This is the float result: " << result << endl;
	cout << "This is the int result: " << result2 << endl;
	return 0;
}
