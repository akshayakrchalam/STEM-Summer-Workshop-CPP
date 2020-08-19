// SummerTeachingWorkshop.cpp
//Lesson 3: By Srivishnu Vedanthi

#include <iostream>
#include <cstdlib>
using namespace std;

class Stack {
private:
	int* arr;
	int top;
	int capacity;

public:
	Stack();
	Stack(int size);
	~Stack();

	void push(int);
	int pop();
	int showTop();
	int size();
	bool isEmpty();
	bool isFull();
};

void main() {
	Stack s1;
	Stack s2(3);

	s2.push(5);
	s2.push(4);

	s2.pop();
	s2.pop();
	//cout <<"The second value popped is "  <<s2.pop() << endl;

	s2.push(3);
	cout << "The top element of the stack is " << s2.showTop() << endl;
	cout << "The size of the stack is " << s2.size() << endl;

	s2.pop();
	if (s2.isEmpty()) {
		cout << "The stack is empty!" << endl;
	}
	else {
		cout << "The stack is not empty!" << endl;
	}
}

Stack::Stack() {
	arr = new int[10];
	capacity = 10;
	top = -1;
}

Stack::Stack(int size) {
	arr = new int[size];
	capacity = size;
	top = -1;
}

Stack::~Stack() {
	delete[] arr;
}

int Stack::size() {
	return top + 1;
}

bool Stack::isEmpty() {
	return size() == 0;
}

bool Stack::isFull() {
	return size() == capacity;
}

int Stack::showTop() {
	if (!isEmpty())
		return arr[top];
	else
		exit(EXIT_FAILURE);
}

void Stack::push(int num) {
	if (isFull()) {
		cout << "Stack is full! Cannot Push!" << endl;
		return;
	}

	cout << "Pushing " << num << endl;
	arr[++top] = num;
}

int Stack::pop() {
	if (isEmpty()) {
		cout << "Stack is empty! Cannot Pop!" << endl;
		exit(EXIT_FAILURE);
	}
	cout << "Popping " << showTop() << endl;
	return arr[top--];
}