#include "shell.h"
/**
*
*
*
**/
void shellexit(char *input)
{
if(strcmp(input, "exit") == 0)
{
free(input);
exit(EXIT_SUCCESS);
}
}
