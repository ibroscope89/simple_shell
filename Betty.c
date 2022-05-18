/* A program  that print pid of the parent Process .*/

#include <stdio.h>
#include <unistd.h>

int main()
{
    int p_pid;

    p_pid = getpid(); /*parent process id*/

    printf("Parent Process ID: %d\n", p_pid);

    return 0;
}
