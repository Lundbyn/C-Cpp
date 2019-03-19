#include <iostream>
#include <vector>
using namespace std;

//Task 1
void task1() {
	int num, pow, sum;

	cout << "Enter the base number: ";
	cin >> num;
	cout << "Enter the exponent: ";
	cin >> pow;

	//Any number to the power of 0 equals 1
	if (pow == 0) {opera
		sum = 1;
	}
	else {
		sum = num;
		for (int i = 0; i < pow - 1; i++) {
			sum *= num;
		}
	}
	cout << num << " to the power of " << pow << " equals " << sum << "\n\n";
}

//Task 2
void task2() {
	vector<int> intVector(15);
	//Filling vector with values 0 - 14
	for (int i = 0; i < intVector.size(); i++) intVector[i] = i;

	vector<int>::iterator i = intVector.begin();

	//Multiplying each value by three and printing values to the terminal
	while (i != intVector.end()) {
		*i *= 3;
		cout << *i << endl;
		i++;
	}
	cout << endl;
}

//Task 3
void task3() {
	int input[5];
	int *p;
	p = input;

	cout << "Enter five integers:" << endl;
	for (int i = 0; i < 5; i++) {
		cin >> *p;
		p++;
	}

	p = input;
	cout << "input entered: ";
	for (int i = 0; i < 5; i++) {
		cout << *p << ", ";
		p++;
	}
	cout << "\n\n";
}

void task4() {

	int numbers[3];
	cout << "Enter three integers;" << endl;
	for (int i = 0; i < 3; i++) cin >> numbers[i];
	int *p;
	//Point to end of array
	p = numbers + (sizeof(numbers) / sizeof(numbers[0])) - 1;

	cout << "Array in reverse: " << endl;
	for (int i = 0; i < 3; i++) {
		cout << *p-- << ", ";
	}
	cout << "\n\n";
}

void task5() {
	vector<int> dynamicVector;
	int size, value;
	vector<int>::iterator pMax;


	cout << "Enter the size of the dataset: ";
	cin >> size;

	if (size <= 0) return;

	cout << "Enter " << size << " integer values: " << endl;
	//Add *size* amount of integers to the vector
	for (int i = 0; i < size; i++) {
		cin >> value;
		dynamicVector.push_back(value);
	}
	
	//Iterator points to first address in vector
	pMax = dynamicVector.begin();

	for (int i = 1; i < size; i++) {
		//Value is greater than current max, pMax points to this new address instead
		if (dynamicVector[i] > *pMax) {
			pMax = dynamicVector.begin() + i;
		}
	}
	cout << "Max value: " << *pMax << " - Pointer address: " << &pMax << endl;
}

int main() {
	
	//Remove comment to run task
	//task1();
	//task2();
	//task3();
	//task4();
	//task5();

	return 0;
}