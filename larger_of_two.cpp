#include <iostream>
using namespace std;

int main(void) {
	int num1;
	int num2;

	int max;
	cout << "Enter two numbers. Press enter after each.\n" << endl;
	cin >> num1;
	cin >> num2;

	max = num1;
	if(num2 > max) {
		max = num2;
	}
	cout << "The larger number is: " << max << endl;
	return 0;
}
