#include "holberton.h"
/**
 * _execve -execute a comand
 * @pathname: path to comand
 * @argv: list of arguments
 * @envp: env
 * Return: 0 succes -1 fail
 */
int _execve(char *pathname, char *argv[], char *envp[])
{
	int exec;	   /* guarda el status de la ejecucion */
	pid_t pid = 0; /* el pid del proceso hijo */

	pid = fork();  /* asignacion del fork() 0exito -1 falla*/
	wait(&exec);
	if (pid < 0)
	{
		perror("Error");
		exit(EXIT_FAILURE);
	}
	if (pid == 0)
	{
		exec = execve(pathname, argv, envp);
		if (exec == -1)
		{
			perror("Error");
			exit(EXIT_FAILURE);
		}
	}
	if (exec == -1)
		return (-1);
	else
		return (0);
}
