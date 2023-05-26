#include "main.h"

int execute_command(char **array)
{
	int status = 0;
	
	if (execute_builtin(array) == 0)
	{
		return (0);
	}
	if (execute_path_commands(array) == 0)
	{
		return (0);
	}

	status = execute_path_commands(array);

	return (status);
}
