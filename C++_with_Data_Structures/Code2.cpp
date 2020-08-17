// SummerTeachingWorkshop.cpp
//Lesson 2: By Srivishnu Vedanthi

#include <iostream>
#include <vector>
using namespace std;

class Car {
private:
	int vinNum;
	string manufacturer;
	int mileage;
public:
	//Constructors
	Car();
	Car(int, string, int);

	//Getter functions
	int getVinNum();
	string getManufacturer();
	int getMileage();

	//Setter functions
	void setVinNum(int);
	void setManufacturer(string);
	void setMileage(int);
};

int main()
{
	int size;
	int* ptr1;
	//ptr1 = new int[size];
	//int arry1[size];
	int tempNum;

	cout << "Enter a size: ";
	cin >> size;
	ptr1 = new int[size];

	//fill array
	cout << "Enter an array of " << size << " ages: ";
	for (int i = 0; i < size; i++) {
		cin >> tempNum;
		//ptr1[i] = tempNum;
		*(ptr1 + i) = tempNum;
	}

	//print array
	cout << "The age array is: ";
	for (int i = 0; i < size; i++) {
		cout << *(ptr1 + i) << " ";
	}
	cout << "\n" << endl;

	//Calls default constructor
	Car hondaAccord;
	Car toyotaCamry(123141, "Toyota", 35);
	hondaAccord.setVinNum(2321231);
	hondaAccord.setManufacturer("Honda");
	hondaAccord.setMileage(28);
	cout << "The Honda Accord has a vin number of " << hondaAccord.getVinNum() << ".\n";
	cout << "The Accord's manufacturer is " << hondaAccord.getManufacturer() << ".\n";
	cout << "The Honda Accord has a mileage of " << hondaAccord.getMileage() << ".\n";
}

//Default constructor
Car::Car() {
	vinNum = 0;
	manufacturer = "";
	mileage = 0;
}

Car::Car(int newVin, string manufac, int newMile) {
	vinNum = newVin;
	manufacturer = manufac;
	mileage = newMile;
}

int Car::getVinNum() {
	return vinNum;
}

string Car::getManufacturer() {
	return manufacturer;
}

int Car::getMileage() {
	return mileage;
}

void Car::setVinNum(int newVin) {
	vinNum = newVin;
}

void Car::setManufacturer(string newManufac) {
	manufacturer = newManufac;
}

void Car::setMileage(int newMile) {
	mileage = newMile;
}