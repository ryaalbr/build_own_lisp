#include <stdio.h>

/* Declare a buffer for user input of size 2048 */
static char input[2048];

int main(int argc, char** argv) {

	/* print version and exit info */
	puts("Lispy Version 0.0.0.0.1");
	puts("Press Ctrl+c to exit\n");
	
	/* never ending loop */
	while (1) {

		/* output prompt */
		fputs("lispy> ", stdout);
		
		/* read line from user input, max size 2048 */
		fgets(input, 2048, stdin);

		/* echo input back to user */
		printf("No you're a %s", input);
	}

	return 0;
}
