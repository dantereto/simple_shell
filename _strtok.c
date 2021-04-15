#include "holberton.h"
/**
 * _strtok - split a string in tokens and allocates memory
 * @text: pointer to string
 * @delimiter: delimiter to split strings
 * Return: **pointer to array splited
 */
char **_strtok(char *text, char *delimiter)
{
	int args = 0; /* inicia los iteradores */
	char **gen_tokens = '\0', *copytext = '\0';
	/*contador de argumentos para asignar la memoria a **pointer */

	if (!text)
		return (gen_tokens);

	copytext = _strdup(text);
	args = countargs(copytext, delimiter);
	gen_tokens = _split(args, copytext, delimiter);

	if (gen_tokens[0] == '\0')
		free(copytext);

	return (gen_tokens);
}