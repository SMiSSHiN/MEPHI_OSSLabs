#include <stdio.h>

extern char **environ;

int main(int argc, char *argv[]) {
	const int MAX_ENV_VAR = 10;

	char **ptr = NULL;	

	for(ptr = environ; *ptr != NULL && (ptr - environ < MAX_ENV_VAR); ptr++) {
		printf("%s\n", *ptr);
	}

	return 0;
}
