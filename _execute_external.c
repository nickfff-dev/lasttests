#include "main.h"

/**
 * execute_external_command - executes an external command
 * @array: array of arguments
 * Return: 0 on success, 1 on failure
 */
int execute_external_command(char **array)
{
    int status = 0;
    pid_t child_pid;
    struct stat st;

    if (array[0][0] == '/')
    {
        if (stat(array[0], &st) == 0)
        {
            child_pid = fork();
            if (child_pid == -1)
            {
                perror("Error");
                exit(1);
            }
            if (child_pid == 0)
            {
                if (execve(array[0], array, environ) == -1)
                {
                    perror("Error");
                    exit(1);
                }
            }
            else
            {
                wait(&status);
                free(array);
                return (0);
            }
        }
        else
        {
            return (1);
        }
    }
    return (1);
}