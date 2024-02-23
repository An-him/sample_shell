#include "shell.h"
/**
*main - for the shell function
*@ac: argument count
*@av: array of commands
*Return: int
**/
int main(int ac, char *av[])
{
size_t n;
char *lineptr;
size_t nread;
printf("$ ");

nread = getline(&lineptr, &n, stdin);
printf("%s", lineptr);
return (0);
}
