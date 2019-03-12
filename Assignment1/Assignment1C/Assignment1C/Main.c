#include <stdio.h>
#include <stdlib.h>

void task1() {

	//Declaring variables needed
	int numbers[10], min, max;
	int numSize = sizeof(numbers) / sizeof(int);

	
	//Asks for input from the user. numSize will be the amount of indexes in the numbers array
	for (int i = 0; i < numSize; i++) {
		printf("Enter an integer: ");
		scanf_s("%d%c", &numbers[i]);
	}

	//Algorithm for finding minimum and maximum in the array
	min = numbers[0];
	max = numbers[0];
	for (int i = 1; i < numSize; i++) {
		if (numbers[i] > max) max = numbers[i];
		if (numbers[i] < min) min = numbers[i];
	}

	//Prints min and max
	printf("Max: %d - Min: %d\n", max, min);
}

void task2() {
	//Declaring variables
	float inputTemp, outputTemp;
	char conv;
	
	//Asks user for input to decide conversion
	printf("Do you want to convert from Fahrenheit to Celsius [f] or from Celsius to Fahrenheit [c]: ");
	scanf_s("%c", &conv);

	//If userinput above is 'c', convert input temperature from Celsius to Fahrenheit
	if (conv == 'c') {
		printf("Enter the temperature in Celsius: ");
		scanf_s("%f", &inputTemp);
		outputTemp = (9.0 / 5.0) * inputTemp + 32;
		
		printf("%f degrees Celsius equals %f degrees Fahrenheit\n", inputTemp, outputTemp);
	}

	//If userinput above is 'f', convert input temperature from Fahrenheit to Celsius
	else if (conv == 'f') {
		printf("Enter the temperature in Fahrenheit: ");
		scanf_s("%f", &inputTemp);
		outputTemp = (inputTemp - 32) / (9.0 / 5.0);

		printf("%.2f degrees Fahrenheit equals %.2f degrees Celsius\n", inputTemp, outputTemp);
	}

	//If userinput is neither 'c' or 'f', 
	else {
		printf("Invalid input\n");
	}
}

int main() {

	//task1();
	task2();


	return 0;
}