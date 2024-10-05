#include <iostream>

using namespace std;

int main() {
	int favorite_number;
	cout << "What's your fave number between 0 and 5" << endl;
	cin >> favorite_number;
	switch(favorite_number) {
		case 1: cout << "Awesome!1" << endl; break;
		case 2: cout << "Great!2" << endl; break;
		case 3: cout << "Also my fave3" << endl; break;
		case 4: cout << "Yuck! 4?" << endl; break;
		default:
			cout << "Enter between 0 and 5 please" << endl; break;
		}
	return 0;
}
