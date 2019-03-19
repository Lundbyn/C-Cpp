#include <iostream>
using namespace std;

int main() {

	cout << "Mathias Lundby." << endl;

	int input[5];
	int *p;
	p = input;

	cout << "Enter five integers:" << endl;
	for (int i = 0; i < 5; i++) {
		cin >> *p;
		p++;
	}

	p = input;
	cout << "input entered with pointers: ";
	for (int i = 0; i < 5; i++) {
		cout << *p << ", ";
		p++;
	}

	return 0;
}