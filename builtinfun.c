#include "holberton.h"
/**
 *_cd - changes current working directory
 * @buff: char pointer to directory
 * Return: 0 if success  -1 if error
 */
int _cd(char *buff) /* todavia no funciona */
{
	(void)buff;
	return (0);
}
/**
 * _env - print enviorement VAR
 * Return: always 0
 */
int _env(void) /* imprime el env toca revisar*/
{
	unsigned int i = 0, j = 0;

	for (i = 0; environ[i]; i++) /* pasa por cada posision del environ */
	{
		for (j = 0; environ[i][j]; j++)
			putchar(environ[i][j]); /* imprime el string de la posicion */
		putchar('\n');
	}
	return (0);
}
/**
 * _getenv2 - function that gets the path in the environ
 * @name: is a char
 * Return: final or null
 */
char *_getenv2(char *name)
{
	int i = 0, j = 0, c = 0;
	char *value;

	for (i = 0; environ[i]; i++)
	{
		for (j = 0; environ[i][j] != '='; j++)
		{
			c = name[j] - environ[i][j];
		}
		if (c == 0) /* si se verifica la igualdad */
		{
			for (j = 0; environ[i][j]; j++) /* se mueve hasta el = */
				if (environ[i][j] == '=')
				{
					value = environ[i] + j + 1;
					return (value); /* retorna el puntero */
				}
		}
	}
	return (NULL);
}
/**
 * _exito - salida segura del programa borra memoria
 * @buffer: cleans getline
 * @main_tokens: tokens initial to free
 * @salida: codigo de salida
 * Return: always 0
 */
int _exito(char *buffer, char  *main_tokens[])
{
	int i;

	if (main_tokens)
	{
		for (i = 0; main_tokens[i]; i++)
			free((void *)main_tokens[i]);
		free(main_tokens); /* libera el doble puntero */
	}
	if (buffer)
		free(buffer);		   /*libera el buffer de getline */
	exit(EXIT_SUCCESS);
	return (0);
}
