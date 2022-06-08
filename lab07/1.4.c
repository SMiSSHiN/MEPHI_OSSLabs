#include <stdio.h>
#include <stdlib.h>

extern char **environ;

int main(int argc, char *argv[]) {
	if(argc < 2) {
		printf("Please pass arguments");		

		return -1;
	}	

	const int MAX_ENV_VAR = atoi(argv[1]);
	char **ptr = NULL;	

	for(ptr = environ; *ptr != NULL && (ptr - environ < MAX_ENV_VAR); ptr++) {
		printf("%s\n", *ptr);
	}

	return 0;
}
