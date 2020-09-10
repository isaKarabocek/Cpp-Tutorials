#include<iostream>
using namespace std;
//method to print the triangle with given number of rows, one_location is the location of 1
void printTriangle(int rows, int one_location) {
	//initial number of columns
	int cols = 1;
	//counter to count each cell
	int counter = 0;
	//looping through each row
	for (int i = 0; i<rows; i++) {
		//looping through each column
		for (int j = 0; j<cols; j++) {
			//updating counter
			counter++;
			//if counter and one_location are same, printing 1
			if (counter == one_location) {
				cout << "1";
			}
			//else printing a '*'
			else {
				cout << "*";
			}
		}
		//line break
		cout << endl;
		//increasing number of columns by 2
		cols += 2;
	}
}
int main() {
	//number of rows
	int rows = 5;
	//total number of cells = rows^2
	int numCells = rows*rows;
	//initial location of 1 (outside)
	int oneLocation = 0;
	//to store user input
	int input = 0;
	//denoting if the 1 is added or not
	bool one_added = false;
	//looping as long as 3 is not entered (an exit case)
	while (input != 3) {
		//printing triangle
		printTriangle(rows, oneLocation);
		//printing menu
		cout << endl << "Press \"1\" button add 1 into the pyramid." << endl;
		cout << "Press \"1\" to move number 1 to next cell." << endl;
		cout << "Press \"2\" to move number 1 to previous cell." << endl;
		cout << "Press \"3\" to exit." << endl; //for exiting the program
		cout << "Choice: ";
		//getting input
		cin >> input;
		cout << endl; //line break
		if (input == 1) {
			//if 1 is not added, adding to cell 1
			if (!one_added) {
				oneLocation = 1;
				one_added = true;
			}
			else {
				//otherwise, incrementing oneLocation
				oneLocation++;
				//wrapping around if goes out of range
				if (oneLocation > numCells) {
					oneLocation = 1;
				}
			}
		}
		else if (input == 2) {
			//if 1 is added to the triangle, updating oneLocation to previous cell
			if (one_added) {
				oneLocation--;
				//wrapping around if necessary
				if (oneLocation < 1) {
					oneLocation = numCells;
				}
			}
			else {
				//1 is not added yet
				cout << "Add 1 first" << endl;
			}
		}
	}
	return 0;
}