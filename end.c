#include <stdio.h>
#include <signal.h>
/**
 * sigintHandler - maneja la señal de  ctrl + c
 * @sig_num: señal recibida
 */
void sigintHandler(int sig_num)
{
  (void)sig_num;
  signal(SIGINT, sigintHandler);
  printf("\n$ ");
  fflush(stdout);
}
