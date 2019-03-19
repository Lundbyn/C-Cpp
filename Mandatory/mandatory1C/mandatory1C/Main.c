#include <stdio.h>


void task1() {

	int list[10];
	int min, max;

	for (int i = 0; i < 10; i++) {
		printf("Enter a number: ");
		scanf_s("%d", &list[i]);
	}

	min = list[0];
	max = list[0];

	for (int i = 1; i < 10; i++) {
		if (list[i] > max) max = list[i];
		if (list[i] < min) min = list[i];
	}

	printf("Maximum: %d\n", max);
	printf("Minimum: %d\n", min);
}

void task1alt() {

	int list[10];
	int min, max, insert;

	printf("Enter a number: ");
	scanf_s("%d", &list[0]);

	min = list[0];
	max = list[0];
	
	for (int i = 1; i < 10; i++) {
		printf("Enter a number: ");
		scanf_s("%d", &insert);
		list[i] = insert;
		
		if (insert > max) max = insert;
		if (insert < min) min = insert;
	}

	printf("Maximum: %d\n", max);
	printf("Minimum: %d\n", min);
}

float task2toF(float c) {

}



int main() {

	float cels, fahr;

	scanf_s("%f", &cels);
	
	fahr = (9 / 5) * cels + 32;
	printf("%f", fahr);

	return 0;
}