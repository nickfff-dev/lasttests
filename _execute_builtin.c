#include "main.h"
/**
 * execute_builtin_command - executes a builtin command
 * @array: array of arguments
 * Return: 0 on success, 1 on failure
 */
int execute_builtin_command(char **array)
{
    char **env;
    int i = 0;
    int j = 0;

	if (_strcmp(array[0], "exit") == 0)
	{
		free(array);
		exit(0);
	}
	if (_strcmp(array[0], "env") == 0)
	{
		env = environ;
		for (i = 0; env[i] != NULL; i++)
		{
			for (j = 0; env[i][j] != '\0'; j++)
			{
				_putchar(env[i][j]);
			}
			_putchar('\n');
		}
		free(array);
		return (0);
	}
    return (1);
}