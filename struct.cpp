#include <iostream>
#include <string>

using namespace std;

int main(void) {
	struct STUDENT {
		string name;
		int age;
	};
	STUDENT stdnt;
	stdnt.name = "kenji_hahoshi";
	stdnt.age = 36;

	cout << stdnt.name << endl;
}
