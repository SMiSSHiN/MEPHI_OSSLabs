#include <stdio.h>
#include <unistd.h>

int main(void) {
	int pid = fork();
	
	if(pid == 0) {
		printf("Message from child process...\n");
		printf("Parent process ID: %d\n"
			   "Child  process ID: %d\n", getppid(), getpid());
	}

	return 0;
}
