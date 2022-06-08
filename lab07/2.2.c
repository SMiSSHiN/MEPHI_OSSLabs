#include <stdio.h>
#include <unistd.h>

int main(void) {
	int pid = fork();
	
	sleep(5);

	if(pid == 0) {
		// Message from child process...
	} else if(pid > 0) {
        // Message from parent process...
    }


	return 0;
}
