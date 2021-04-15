#include "holberton.h"
/**
 * comExterno - execute a external comand
 * Return: 0 success -1 if fail
 * @main_tokens: tokens to initial array
 * @buff: buff that contains the command
 */
int comExterno(char *buff, char *main_tokens[])
{
  struct stat st;
  int i = 0, exec_status = -1;
  char *_envpath = NULL, *delim = ":", **path_tokens = '\0';

  _memset(buff, '\0', 100);
  _envpath = _getenv2("PATH1");
  path_tokens = _strtok(_envpath, delim);
  while (exec_status == -1 && path_tokens[i] != '\0')
    {
      _strcpy(buff, path_tokens[i]);
      _strcat_extern(buff, main_tokens[0]);
      if ((stat(buff, &st)) == 0 || (stat(main_tokens[0], &st)) == 0)
	{
	  wait(&exec_status);
	  if ((stat(main_tokens[0], &st)) == 0)
	    exec_status = _execve(main_tokens[0], main_tokens, NULL);
	  else
	    exec_status =  _execve(buff, main_tokens, NULL);

	  free((void *)path_tokens[0]);
	  free(path_tokens);
	}

      i++;
    }
  if (exec_status == 0)
    return (0);
  else if (exec_status == -1)
    {
      free((void *)path_tokens[0]);
      free(path_tokens);  /* libera el doble puntero */
      return (-1);   /* retorna el error */
    }
  else
    exit(128); /* error no identificado error fatal */
}
