#include <iostream>
#include <stdio.h>

using namespace std;

int searchTemp(int a);
int lastNumber(int number);
int powerof(int a, int b);

int main() {
	int a = 1, b = 1;
	int loop;

	cin >> loop;

	int temp;
	int exponent;
	for (int i = 0; i < loop; ++i) {
		cin >> a >> b;
		a = lastNumber(a);
		temp = searchTemp(a);
		if (temp == 0) {
			exponent = b;
		}
		else {
			exponent = b % temp;
			if (exponent == 0) {
				exponent = temp;
			}
		}
		printf("%u\n", lastNumber(powerof(a, exponent)));
	}
	return 0;
}

int lastNumber(int number) {
	return number % 10;
}

int searchTemp(int a) {
	int numberPlace = 0;
	int result = 0;
	int exponent = 1;
	int numbers[100];
	for (char i = 0; i < 100; ++i) { // Table inicialization
		numbers[i] = 0;
	}

	int lastNumberIndex = -1;

	int base = 1;
	while (numberPlace == 0) {
		int result = base * a;

		base = lastNumber(result);
		numbers[++lastNumberIndex] = base;

		for (int i = 0; i < lastNumberIndex; ++i) { // Searchin replacement
			if (numbers[i] == base) {
				numberPlace = exponent - i;
				break;
			}
		}
		++exponent;

	}
	return numberPlace - 1;
}

int powerof(int a, int b) {
	int i = 1;
	int result = a;
	while (i < b) {
		result = result * a;
		++i;
	}
	return result;
}
