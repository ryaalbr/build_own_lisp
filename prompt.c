#include <stdio.h>
#include <stdlib.h>

/* if compiling on windows, compile these functions */
#ifdef _WIN32
#include <string.h>

static char buffer[2048];

/* fake readline func */

char* readline(char* prompt) {
	fputs(prompt, stdout);
	fgets(buffer, 2048, stdin);
	char* cpy = malloc(strlen(buffer) + 1);
	strcpy(cpy, buffer);
	cpy[strlen(cpy)-1] = '\0';
	return cpy;
}

/* fake addhist func */
void add_history(char* unused) {}

/* otherwise include editline headers */ 
#else
#include <editline/readline.h>
#endif

int main(int argc, char** argv) {

	/* print version and exit info */
	puts("Lispy Version 0.0.0.0.1");
	puts("Press Ctrl+c to exit\n");
	
	/* never ending loop */
	while (1) {

		/* output prompt */
		char* input = readline("lispy> ");
		
		/* add input to history */
		add_history(input);
		
		/* echo input back to user */
		printf("No you're a %s\n", input);

		/* free retrieved input */
		free(input);
	}

	return 0;
}
