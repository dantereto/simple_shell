#include "holberton.h"
/**
* _split - divide a string in tokens
* @text: string to divide
* @args: expected number of tokens
* @delimiter: delimiter
* Return: gen_tokens
*/
char **_split(int args, char *text, char *delimiter)
{
	int i = 0, k = 0;
	char *currenttext = '\0';
	char **gen_tokens = '\0';

	gen_tokens = malloc(sizeof(char *) * (args + 1));
	if (gen_tokens == NULL)
		exit(128); /* revisar salida */

	currenttext = text; /* donde inia el argumento */
	for (i = 0; i < args; i++)
	{
		for (k = 0; text[k] != '\0'; k++)
		{
			if (text[k] == *delimiter && k == 0)
			{
				text[k] = '\0';
				text++;
				currenttext = text;
				k = -1;
			}
			else if (text[k] == *delimiter)
			{
				gen_tokens[i] = currenttext;
				text[k] = '\0';
				currenttext = &text[k + 1];
				text = &text[k + 1];
				break;
			}
			else if (text[k + 1] == '\0')
				gen_tokens[i] = currenttext;
		}
	}
gen_tokens[i] = '\0';
return (gen_tokens);
}
