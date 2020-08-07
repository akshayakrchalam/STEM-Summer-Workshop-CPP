#include <iostream>
using namespace std;

//Declaring functions/methods
int* ssort(int[]);
void bsort(int[]);
void printArr(int[]);

//Defining functions/methods
void printArr(int arr[]) {
    for (int i = 0; i < 10; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int* ssort(int arr[]) {
    int index, i, j, val;
    for(i = 0; i < 10; i++) {
        val = arr[i];
        index = i;
        for(j = i+1; j < 10; j++) {
            if(val > arr[j]) {
                val = arr[j];
                index = j;
            }
        }
        arr[index] = arr[i];
        arr[i] = val;
        printArr(arr);
    }
    return arr;
}

void bsort(int arr[]) { //bubble sort logic
    int temp, i, j;
    for(i = 1; i < 10; i++) {
        for(j = 0; j < 9; j++) {
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            printArr(arr);
        }
        printArr(arr);
    }
    cout << "Array of ages sorted in ascending order using bubble sort: ";
    for (int i = 0; i < 10; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() { // definition statement
	int numArray[10], *rArray, num2Array[10]; //declaration statement
	/*cout << "Initial values in array: " << endl;
	for (int i = 0; i < 10; i++)
        cout << numArray[i] << " ";*/

	cout << "Enter an array of 10 ages" << endl;
	for (int i = 0; i < 10; i++) {
	    cout << "Enter the age #" << (i+1) << ": ";
	    cin >>numArray[i];
	    num2Array[i] = numArray[i];
	}

	cout << "The age array is: ";
	for (int i = 0; i < 10; i++)
        cout << numArray[i] << " ";
    cout << endl;

    bsort(numArray);

    cout << "The age 2array is: ";
	for (int i = 0; i < 10; i++)
        cout << num2Array[i] << " ";
    cout << endl;
    rArray = ssort(num2Array);
    cout << "Array of ages sorted in ascending order using selection sort: ";
    for (int i = 0; i < 10; i++)
        cout << rArray[i] << " ";
    cout << endl;
    return 0;
}
