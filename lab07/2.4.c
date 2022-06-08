#include <stdio.h>
#include <unistd.h>

int main(void) {
	const int MAX_CHILD_PROC = 100;	

	int pid = fork();

	for(int i = 0; i < MAX_CHILD_PROC; i++) {
		if(pid == 0) {
			// Message from child process...
		} else if(pid > 0) {
	        // Message from child process...
			fork();
	    }
	}

	sleep(5);

	return 0;
}
