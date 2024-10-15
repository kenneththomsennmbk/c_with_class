#include <iostream>

using namespace std;

int main(void) {
	int rows = 5;//we declare the rows
	int cols = 5;//we declare the cols
	int **arr;//we make our pointer pointer array
	//allocate and initialize the array
	arr = new int *[rows];//we make each row a pointer
	for(int r = 0; r < rows; r++) {//we use r to cycle through the array adding one
		arr[r] = new int[r + 1];//it adds one to the below value
	for(int c = 5; c > r; c--) {//c iterates through the columns
		arr[r][c] = (r + 1) * 2 + c - 5;//we increase our rows
						 //multiply by ten and add one at each column
	}
	}
	//print the array
	for(int r = 0; r < rows; r++) {//we iterate through our array
		for(int c = 5; c > r; c--)//and columns
			cout << arr[r][c] << " ";//we put the result to the terminal
		cout << endl;//we end the line after each print
	}
	//free the array
	for(int r = 0; r < rows; r++)//we iterate the rows
		delete[] arr[r];//we delete the rows and columns
	delete[] arr;//we delete the arr **
	return 0;//we return zero
}

