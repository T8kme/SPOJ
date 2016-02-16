#include <iostream>
#include <stdlib.h>

using namespace std;

bool IsPrime(int);

int main() {
	int number;
	int table[100000];

	for (int i = 0; i <= 100000; i++) {

		number = rand() % 10000 + 1;
		cout << number << endl;

		if (IsPrime(number)) {
			table[i] = 1;
		}
		else {
			table[i] = 0;
		}
	}

	for (int i = 0; i <= 10; i++) {

		if (table[i] == 1) {
			cout << "TAK" << endl;
		}
		else {
			cout << "NIE" << endl;
		}
	}
	cin.get();
	return 0;
}

bool IsPrime(int number) { // Given:   num an integer > 1
	// Returns: true if num is prime
	// false otherwise.

	for (int i = 2; i < number; i++) {
		if (number % i == 0) {
			return false;
		}
	}

	return true;
}
