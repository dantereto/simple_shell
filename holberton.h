#ifndef HOLBERTON_H
#define HOLBERTON_H
#define _GNU_SOURCE
#include <stdio.h>
#include <stdio_ext.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <limits.h>
#include <signal.h>
#include <stdbool.h>
#include <stdlib.h>

#define SUCCESS 0


extern char **environ;
char **_strtok(char *text, char *delimiter);
char *_strcpy(char *dest, char *src);
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
char **strtok2(char *s, char *delim);
char *_strcat_extern(char *dest, char  *src);
char *length(char *str);
char *_strdup(char *str);
char *_strcat(char *dest, char *src);
char **strtok2(char *str, char *delim);

char *_getenv2(char *name);
int _exito(char *buff, char *main_tokens[], int salida);
int _cd(char *buff);
int _env(void);

int comExterno(char *buff, char *main_tokens[]);
int get_builtins(char *buffer,  char *main_tokens[], int salida);
int _execve(char *pathname, char *argv[], char *envp[]);

char *_memset(char *s, char b, unsigned int n);
void sigintHandler(int sig_num);
int countargs(char *copytext, char *delimiter);
char **_split(int words, char *text, char *delimiter);
int exec(char *main_tokens[]);
char *search(char *name);
void _perror(char *shell_name, char *comand_name);

/**
 * builtins - get builtins function
 * @funtion: to execute
 * @(*f)(void): pointer to function
 */
typedef struct builtins
{
	char *function;
	int  (*f)();
} builtins_t;

#endif
