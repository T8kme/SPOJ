#include<iostream>

using namespace std;

int main() {
	int length, number = 1;
	cin >> length;

	while (length > 0) {

	cin >> number;

	if (number < 10) {

	int factorial = 1;
	for (int i = 2; i <= number; i++) {
		factorial = factorial * i;
	}

	cout << (factorial % 100) / 10 << " " << factorial % 10 << endl;
	}
	else
	cout << 0 << " " << 0 << endl;

	length--;
	}
	return 0;
}
