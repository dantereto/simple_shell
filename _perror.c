#include "holberton.h"
/**
* _perror - prints error made by us :)
*@shell_name: name of shell
*@comand_name: failed command
*/
void _perror(char *shell_name, char *comand_name)
{

	int i = 0;
	char error[1024];

	_memset(error, '\0', 1024);
	_strcat(error, shell_name);
	_strcat(error, ": ");
	_strcat(error, "1: ");
	_strcat(error, comand_name);
	_strcat(error, ": ");
	_strcat(error, "not found\n");

	for (i = 0; error[i] != '\0'; i++)
	{	}

	write(STDERR_FILENO, &error, i);
}
