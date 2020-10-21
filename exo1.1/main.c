#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(int argc, char* argv[])
{
    pid_t pid = fork();

    if (pid == 0) {
        printf("je suis fils (pid=%d, ppid=%d)\n", getpid(), getppid());
    }
    else if (pid > 0) {
        printf("je suis père (mon fils est %d)\n", pid);
    }

    return 0;
}
