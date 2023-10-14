#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void main() {
	char* filename = "/usr/bin/echo";
	char *argv_for_program[] = { filename, "a", NULL };
	execv(filename, argv_for_program);
}
