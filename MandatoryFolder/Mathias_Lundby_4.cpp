#include <iostream>
using namespace std;

int main() {

	cout << "Mathias Lundby." << endl;

	int numbers[3];
	cout << "Enter three integers;" << endl;
	for (int i = 0; i < 3; i++) cin >> numbers[i];
	int *p;
	//Point to end of array
	p = numbers + (sizeof(numbers) / sizeof(numbers[0])) - 1;

	cout << "Array in reverse: " << endl;
	for (int i = 0; i < 3; i++) {
		cout << *p-- << endl;
	}

	return 0;
}