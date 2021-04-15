#include "holberton.h"
/**
* main - entry point
*@argc: number of args
*@argv: array to  args
* Return: exit status
*/
int main(int argc, char *argv[])
{
	size_t len = 0;
	ssize_t characters = 0;
	int continuar = 1;
	char *buff = NULL, **main_tokens = '\0';
	int salida = 0;
	(void)argc;
	signal(SIGINT, sigintHandler);
	while (continuar)
	{
		if (isatty(STDIN_FILENO) != 0)
			write(STDOUT_FILENO, "$ ", 2);
		if (main_tokens)
		{
			free((void *)main_tokens[0]);
			free(main_tokens);
		}
		characters = getline(&buff, &len, stdin);
		if (characters == EOF)
		{
			free(&*buff);
			if (isatty(STDIN_FILENO) == 1)
				write(STDOUT_FILENO, "\n", 2);
			break;
		}
		buff[characters - 1] = '\0';
		if (_strlen(buff) > 0)
		{
			main_tokens = _strtok(buff, " ");
			if (main_tokens[0] != '\0')
			{
				if ((_strcmp(main_tokens[0], "env") == 0
				   || _strcmp(main_tokens[0], "exit") == 0)
				   && (main_tokens[1] == '\0'))
					get_builtins(buff, main_tokens, salida);
				else if	(comExterno(buff, main_tokens) == -1)
					_perror(argv[0], main_tokens[0]);
			}
		}
	}
	return (0);
}
