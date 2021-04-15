#include "holberton.h" /* todas las funciones sobre cadenas usadas */
/**
 * *_strcpy - copies the string pointed to by src
 *@src: a string
 *@dest: a string
 *Return: return 0
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
 * _strcmp - compares two strings
 *@s1: the string
 *@s2: the second string
 *Return: return 0
 */
int _strcmp(char *s1, char *s2)
{
	int len;

	for (len = 0; s1[len] || s2[len]; len++)
	{
		if (s1[len] < s2[len])
			return (s1[len] - s2[len]);
		else if (s1[len] > s2[len])
			return (s1[len] - s2[len]);
	}
	return (0);
}
/**
 * _strlen - checks the lenght of a string
 *@s: the string
 *Return: return 0
 */
int _strlen(char *s)
{
	int cont = 0;

	while (s[cont] != '\0')
	{
		cont++;
	}
	return (cont);
}
/**
 * _memset -  fills memory with a constant byte.
 *@s:the pointer
 *@b:the constant byte
 *@n:the bytes
 *Return: return 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

/**
 * *_strdup -  duplicate a string
 * @str: string
 * Return: pointer to dup or null
 */
char *_strdup(char *str)
{
	char *dup;
	int i = 0;
	int j = 0;

	if (!str)
		return (NULL);

	while (str[i] != '\0')
	{
		i++;
	}

	dup = malloc(sizeof(char) * (i + 1));

	if (dup == NULL)
		return (NULL);

	for (; j <= i; j++)
	{
		dup[j] = str[j];
	}
	return (dup);
}
