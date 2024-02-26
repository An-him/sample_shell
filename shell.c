#include "shell.h"
/**
*main - main program for my shell
*Return: int
**/
int main(void)
{
char *cmd = NULL;
while (1)
{
cmd = promptandparse();
if (cmd == NULL)
{
free(cmd);
break;
}
shellexit(cmd);
printf("%s\n", cmd);
free(cmd);
}
return (0);
}
