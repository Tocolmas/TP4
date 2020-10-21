#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int argc, char* argv[])
{
    char input[4096] = "";

    for (;;)
    {

        printf("> ");
        fgets(input, 4096, stdin);

        if (strncmp(input, "quit", 4) == 0)
        {
            break;
        }

        char* args[1024];
        int arg_i = 0, i = 0;

        args[arg_i++] = input;

        while (input[i] != '\n')
        {
            if (input[i] == ' ')
            {
                input[i] = '\0';
                args[arg_i++] = &input[i + 1];
            }

            ++i;
        }

        input[i] = '\0';
        args[arg_i] = NULL;

        pid_t pid = fork();

        if (pid == 0)
        {
            execvp(args[0], args);
            perror("Error");
            exit(0);
        }
        else if (pid > 0)
        {
            wait(NULL);
        }
    }

    return 0;
