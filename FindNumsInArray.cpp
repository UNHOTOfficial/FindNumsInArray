#include <iostream>
using namespace std;

int main() {
	//initialize variables
	int arr[10][10], num1, num2;

	//get array from user
	cout << "Enter 100 numbers:" << endl;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cin >> arr[i][j];
		}
	}

	//get two numbers from user to search in array
	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;

	//search for first and second number in columns
	for (int col = 0; col < 10; col++) {

		//not found
		int row1 = -1, row2 = -1;

		//search for numbers
		for (int row = 0; row < 10; row++) {
			//first number found
			if (arr[row][col] == num1) {
				row1 = row;
			}
			//second number found
			if (arr[row][col] == num2) {
				row2 = row;
			}
		}
		//both numbers found
		if (row1 != -1 && row2 != -1) {
			cout << num1 << " was found: (" << row1 << "," << col << ")" << endl;
			cout << num2 << " was found: (" << row2 << "," << col << ")" << endl;

			//exit the loop
			break;
		}
	}

	return 0;
}
