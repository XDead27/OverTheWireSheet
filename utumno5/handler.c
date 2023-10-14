#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>


void main() {
	const char *filepath = "./utumno5";
	// getchar();
	char **argv = { NULL };

	// int pid = fork();

	// if(pid == 0) {
	execv(filepath, argv);
	// }

	// int wpid, status = 0;
	// while ((wpid = wait(&status)) > 0);
}
