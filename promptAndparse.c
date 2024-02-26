#include "shell.h"
/**
*promptandparse.c - prompts and parses string
*@input: string to parse
*Return: char
**/
char *promptandparse(void)
{
size_t n = 0;
char *lineptr;
ssize_t BytesToRead;

write(1, "$ ", 2);

BytesToRead = getline(&lineptr, &n, stdin);

if (BytesToRead == -1)
{
free(lineptr);
return (NULL);
}
return (parse(lineptr));
}
