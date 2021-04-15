#include "holberton.h"
/**
 * *_strcat_extern - concatenates two strings and adds a /
 * @dest: destiny
 * @src: source
 * Return: char
 */
char *_strcat_extern(char *dest, char *src)
{
int i = 0, j = 0; /* couters to arrays */
while (dest[i] != '\0')
i++;
dest[i] = '/';
i++;
for (; (dest[i] = src[j]) != '\0';)
{
i++;
j++;
}
return (dest);
}

#include "holberton.h"
/**
 * *_strcat - concatenates two strings
 * @dest: destiny
 * @src: source
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
int i = 0, j = 0; /* couters to arrays */
while (dest[i] != '\0')
i++;
for (; (dest[i] = src[j]) != '\0';)
{
i++;
j++;
}
return (dest);
}
