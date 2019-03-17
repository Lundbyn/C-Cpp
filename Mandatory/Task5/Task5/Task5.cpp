#include "pch.h"
#include <iostream>
using namespace std;

//declares local variables a and b as parameters
void swap_1(int a, int b) {
	int temp = a;
	a = b;
	b = temp;

	cout << "At the end of function swap_1: \n";
	cout << "A: " << a << "\nB: " << b << "\n\n";
}

//Creates pointers to variables a and b
void swap_2(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;

	cout << "At the end of function swap_1: \n";
	cout << "A: " << a << "\nB: " << b << "\n\n";
}

int main()
{
	int a, b;

	cout << "Enter two integers: \n";
	cin >> a >> b;

	cout << "\nBefore swap_1 is ran: \n";
	cout << "A: " << a << "\nB: " << b << "\n\n";

	swap_1(a, b);
	//swap_1 only affects copied variables sent to new scope.
	//When a and b is printed in main a and b is unchanged
	cout << "After swap_1 is ran: \n";
	cout << "A: " << a << "\nB: " << b << "\n\n";


	swap_2(a, b);
	//Swap_2 creates pointers to a and b.
	//When a and b is swaped in the new scope the variables are also swaped in main
	cout << "After swap_2 is ran: \n";
	cout << "A: " << a << "\nB: " << b << "\n\n";
}