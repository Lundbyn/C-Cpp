#include <iostream>
#include <vector>
using namespace std;

int main() {

	cout << "Mathias Lundby." << endl;

	vector<int> dynamicVector;
	int size, value;
	vector<int>::iterator pMax;


	cout << "Enter the size of the dataset: ";
	cin >> size;

	if (size <= 0) return 0;

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

	return 0;
}