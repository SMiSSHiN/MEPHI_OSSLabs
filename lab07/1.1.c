#include <stdio.h>

extern char **environ;

int main(int argc, char *argv[]) {
	char **ptr 	= NULL;
	int counter = 0;	

	for(ptr = environ; *ptr != NULL; ptr++) {
		counter += 1;
	}

	printf("Number of environment variables: %d\n", counter);

	return 0;
}
