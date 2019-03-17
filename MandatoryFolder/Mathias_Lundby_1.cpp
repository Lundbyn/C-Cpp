#include <iostream>
using namespace std;


int power(int num, int pow) {

	//Any number to the power of 0 equals 1
	if (pow == 0) {
		return 1;
	}

	int sum = num;
	for (int i = 0; i < pow - 1; i++) {
		sum *= num;
	}
	return sum;
}

int main() {

	cout << "Mathias Lundby." << endl;

	int num, pow, sum;

	cout << "Enter the base number: ";
	cin >> num;
	cout << "Enter the exponent: ";
	cin >> pow;

	sum = power(num, pow);
	
	cout << num << " to the power of " << pow << " equals " << sum << "\n\n";

	return 0;
}