#include "pch.h"
#include <iostream>
using namespace std;

//function to decide wheter input is even or not
bool task3(int input) {

	if (input % 2 == 0) {
		return true;
	}
	return false;
}

//Fibonacci function
void task4(int n) {
	//If integer entered is 0, return from function
	if (n == 0) return;

	//Declaring variables. Current is f(n), prev is f(n-1)
	int prev = 0, current = 1;

	//Algorithm to print current Fibonacci number, and decide the next in line
	for (int i = 0; i < n; i++) {
		cout << current << endl;
		current += prev;
		prev = current - prev;
	}
}



int main()
{
	//Task 3
	//Asks user for input
	int input;
	cout << "Please enter an integer: ";
	cin >> input;
	//writes 1 if input is even, or 0 if input is odd
	cout << task3(input);


	//Task 4
	//Asks user for amount of Fibonacci numbers
	int n;
	cout << "Please enter the amount of Fibonacci numbers you want to see: ";
	cin >> n;
	task4(n);


	//Task 5
	

	return 0;
}