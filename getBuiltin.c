#include "holberton.h"
/**
 * get_builtins - search the sign
 *@buffer: comando
 *@main_tokens: tokens del main
 *@salida: codigo de salida
 *Return: return 0
 */
int get_builtins(char *buffer,  char *main_tokens[])
{
	int i = 0;

	builtins_t build[] = {
		{"env", _env},
		{"exit", _exito},
		{NULL, NULL}};
	for (i = 0; build[i].function; i++)
	{
		if (_strcmp(buffer, build[i].function) == 0)
		{
			return (build[i].f(buffer, main_tokens));
		}
	}
	return (-1);
}
