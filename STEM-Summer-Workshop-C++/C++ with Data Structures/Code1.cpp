// SummerTeachingWorkshop.cpp
//Lesson 1: By Srivishnu Vedanthi

#include <iostream>
#include <vector>
using namespace std;

int largestNum(int[], int size);

int main()
{
    //Hello World
    cout << "Hello World!\n" << endl;

    //Basix print and input statements
    int age;
    cout << "How old are you?";
    cin >> age;
    cout << "You are " << age << " years old!\n" << endl;

    //Array with Loops
    int numArray[10];
    int tempNum;
    //fill array
    cout << "Enter an array of 10 ages: ";
    for (int i = 0; i < 10; i++) {
        cin >> tempNum;
        numArray[i] = tempNum;
    }

    //print array
    cout << "The age array is: ";
    for (int i = 0; i < 10; i++) {
        cout << numArray[i] << " ";
    }
    cout << "\n" << endl;
    //Assignment: Print the array out from smallest age to oldest. Then also print the mean age. Also print the most repeated age.

    //Function Declaration, Defination, and Calling
    int largest = largestNum(numArray, 10);
    cout << "The largest age in the array is " << largest << "\n" << endl;

    //Arrays are static (not dynamic) -- size is fixed
    //int array1[];
    int array2[] = { 1, 2, 3, 23, 23};
    int array3[10];

    //Introduction to Vector Class
    //#include <vector>
    vector<int> sampleVector;
    sampleVector.push_back(10);
    sampleVector.push_back(20);
    //v1.push_back("b");

    //Pointers, OOP (creating objects/classes), Review Vector class
}

int largestNum(int numArray[], int size) {
    int largest;
    largest = numArray[0];

    for (int i = 0; i < size; i++) {
        if (numArray[i] > largest) {
            largest = numArray[i];
        }
    }
    return largest;
}
