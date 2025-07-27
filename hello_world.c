#include <stdio.h>

int printHello(int n) {
	for (int i = 0; i < n; i++) {
		puts("Hello World!");
	}
}

int main(int argc, char** argv) {
	int n = 10;
	printHello(10);
	return 0;
}
