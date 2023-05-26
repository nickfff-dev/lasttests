#include "main.h"

/**
 * get_path_env - gets the PATH environment variable
 * Return: the PATH environment variable
 */

char *get_path_env(void)
{
    char *path_env;

    path_env = getenv("PATH");
    if (path_env == NULL)
    {
        perror("Error");
        exit(1);
    }
    return (path_env);
}