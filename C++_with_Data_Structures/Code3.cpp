// SummerTeachingWorkshop.cpp
//Lesson 3: By Srivishnu Vedanthi

#include <iostream>
#include <vector>
using namespace std;

int main() {
	//Understanding Pointers
	int x = 10;
	int* y = &x;
	cout << "The address of x is: " << &x << endl;
	cout << "The value in the pointer y is: " << y << endl;
	cout << "The value of the pointer y points to is: " << *y << endl;
	*y += 17;
	cout << "The value of the variable x is: " << x << endl;
}