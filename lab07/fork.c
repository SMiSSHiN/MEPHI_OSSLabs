#include <stdio.h>
#include <unistd.h>

int main(void) {
	int pid = fork();
	
	if(pid == 0) {
		printf("Message from child process.\n");
	} else if(pid > 0) {
		printf("Message from parent process.\n");
		printf("Child process ID: %d\n", pid);
	}

	return 0;
}	
