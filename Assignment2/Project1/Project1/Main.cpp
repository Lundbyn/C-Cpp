#include <iostream>
#include <vector>
using namespace std;

//Task 1
int power(int num, int pow) {

	//x to the power of 0 is always 1
	if (pow == 0) {
		return 1;
	}

	int sum = num;
	for (int i = 0; i < pow - 1; i++) {
		sum *= num;
	}
	return sum;
}

//Task 2
void multiplyVector(vector<int> intVector) {
	vector<int>::iterator i = intVector.begin();

	//Multiplying each value by three and printing values to the terminal
	while (i != intVector.end()) {
		*i *= 3;
		cout << *i << endl;
		i++;
	}
}

//Task 3
void pointerInput(int input[5]) {
	int *p;
	p = input;

	cout << "Enter five integers:" << endl;
	for (int i = 0; i < 5; i++) {
		cin >> *p;
		p++;
	}
}

void printReverse(int numbers[5]) {
	int *p;
	p = numbers + sizeof(numbers);

	cout << "Array in reverse: " << endl;
	for (int i = 0; i <= sizeof(numbers); i++) {
		cout << *p-- << ", ";
	}
}

void task5() {
	vector<int> dynamicVector;
	int size, value;
	vector<int>::iterator pMax;


	cout << "Enter the size of the dataset: ";
	cin >> size;

	if (size <= 0) return;

	cout << "Enter " << size << " integer values: " << endl;
	for (int i = 0; i < size; i++) {
		cin >> value;
		dynamicVector.push_back(value);
	}
	
	pMax = dynamicVector.begin();
	for (int i = 1; i < size; i++) {
		if (dynamicVector[i] > *pMax) {
			pMax = dynamicVector.begin() + i;
		}
	}

	cout << "Max value: " << *pMax << " - Pointer address: " << &pMax << endl;
}

int main() {
	/*
	//Task 1
	//Power function with 2^8 as an example
	cout << "Task1:\n2 to the power of 8 : " << power(2, 8) << "\n\n";
	

	//Task2
	//Assgning values 0 - 14 to a vector and using multiplyFunction to
	//multiply every value in vector by three
	cout << "Task 2:" << endl;
	vector<int> intVector(15);
	for (int i = 0; i < intVector.size(); i++) intVector[i] = i;
	multiplyVector(intVector);


	//Task 3
	//Declaring an integer array used in pointerInput function to set values
	//then printing them to the terminal
	cout << "\nTask 3:" << endl;
	int input[5];
	pointerInput(input);
	cout << "input entered: ";
	for (int i = 0; i < 5; i++) {
		cout << input[i] << ", ";
	}
	

	//Task 4
	//Using array from task 3 in printReverse
	cout << "\n\nTask 4:" << endl;
	printReverse(input);
	*/


	//Task 5
	task5();

	return 0;
}