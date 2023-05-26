#include "main.h"

/**
 * build_path - builds the path to a command
 * @token: token from the PATH environment variable
 * @command: command to execute
 * Return: path to the command
 */
char *build_path(char *token, char *command)
{
    char *path;

    path = malloc(sizeof(char) * (_strlen(token) + _strlen(command) + 2));
    if (path == NULL)
    {
        perror("Error");
        exit(1);
    }
    path = _strcat(path, token);
    path = _strcat(path, "/");
    path = _strcat(path, command);
    return (path);
}