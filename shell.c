#include "shell.h"
/**
*main - main program for my shell
*Return: int
**/
int main(void)
{
pid_t pid;
char *argv[] = {"bin/ls",NULL};
char *cmd = NULL;
int status;
argv[0] = cmd;
while (1)
{
cmd = promptandparse();
if (cmd == NULL)
{
free(cmd);
break;
}
shellexit(cmd);
free(cmd);
}
return (0);
}
