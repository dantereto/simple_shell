#include "holberton.h"
/**
 * countargs - count the arguments in the input string
 * @copytext: a copy from input string
 * @delimiter: delimiter of args
 * Return: number of words
 */
int countargs(char *copytext, char *delimiter)
{
int args = 0, k = 0;

do {
	if ((copytext[k] == *delimiter ||
	     copytext[k + 1] == '\0') &&
	    (k != 0 && (copytext[k - 1] != ' ')))
		args++;
	k++;
} while (copytext[k] != '\0');
return (args);
}
