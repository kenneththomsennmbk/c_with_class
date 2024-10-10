#include <iostream>

using namespace std;
//we add a squaring function
float square(float x) {
	//we add a var to hold the result
	float result;
	//we square it
	result = x * x;
	//we return it
	return result;
}

int main() {
	//we output our func result
	cout <<	square(3.14);
	//we return zero to int main
	return 0;
}
