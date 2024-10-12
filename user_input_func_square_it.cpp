#include <iostream>

using namespace std;

//we introduce our square function
//we give it a variable anum
float square_it(float anum) {
	return anum * anum;
}
//we return anum * anum
int main() {
	//we introduce our main square variable
	float squared;
	cout << "What will you square?" << endl;
	//we ask the user what to square then get the value
	//save the value to squared
	cin >> squared;
	//then pass the value to our function square_it
	cout << square_it(squared) << endl;
	//we return zero
	return 0;
}
