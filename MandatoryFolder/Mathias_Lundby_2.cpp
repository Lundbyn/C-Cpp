#include <iostream>
#include <vector>
using namespace std;

int main() {

	cout << "Mathias Lundby." << endl;

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

	return 0;
}