#include <iostream>
using namespace std;

int main() {
	int numArray[10];
	int tempNum;
	cout << "Enter an array of 10 ages: ";
	for (int i = 0; i < 10; i++) {
		cin >> tempNum;
		numArray[i] = tempNum;
	}
		cout << "The age array is: ";
		for (int i = 0; i < 10; i++) {
			cout << numArray[i] << " ";
	}
		    cout << "\n" << endl;


}
