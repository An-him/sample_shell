#include "shell.h"
/**
*parse - removes newline
*@input: str
*Return: char
**/
char *parse(char *input)
{
input[strcspn(input, "\n")] = '\0';
return (input);
}
