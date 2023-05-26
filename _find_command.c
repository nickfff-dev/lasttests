#include "main.h"
/**
 * find_command - finds a command in the PATH environment variable
 * @array: array of arguments
 * Return: 0 on success, 1 on failure
 */

int find_command(char **array)
{
    char *path_env, *path_env_copy, *token, *path;
    struct stat st;

    path_env = get_path_env();
    path_env_copy = _strdup(path_env);
    token = strtok(path_env_copy, ":");
    while (token != NULL)
    {
        path = build_path(token, array[0]);
        if (stat(path, &st) == 0)
        {
            if (_runs_command(path, array) == 0)
            {
                free(path_env_copy);
                free(path);
                return (0);
            }
        }
        free(path);
        token = strtok(NULL, ":");     
    }
    free(path_env_copy);
    return (1);
}