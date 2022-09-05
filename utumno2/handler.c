#include <stdio.h>
#include <unistd.h>

int main( void ) {
        int n;
        char input[512];

        scanf("%d", &n);
        read(0, input, n);

        char *argvnull[] = { NULL };
        char *envp[]={ "a", "a", "a", "a", "a", "a", "a", "a", "a", input, NULL };
        execve( "/utumno/utumno2", argvnull, envp);
        return ( 0 );
}

