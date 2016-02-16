#include <stdio.h>
#include <stdlib.h>

int main() {
	int a = 0;
	int b = 0;
	int c = 0;
	int buffer = 0;

	while (scanf("%d %d %d", &a, &b, &c) != EOF) {	// End Of File
		if (a > c) {
			buffer = a;
			a = c;
			c = buffer;
		}
		if (b > c) {
			buffer = b;
			b = c;
			c = buffer;
		}
		if ((a + b) <= c) {
			printf("brak\n");
		}
		else if ( ((a * a) + (b * b)) == (c * c)) {
			printf("prostokatny\n");
		}
		else if ( ((a * a) + (b * b)) > (c * c)) {
			printf("ostrokatny\n");
		}
		else if ( ((a * a) + (b * b)) < (c * c)) {
			printf("rozwartokatny\n");
		}
	}
	return 0;
}
