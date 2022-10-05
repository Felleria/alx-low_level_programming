#include "main.h"

/**
*len - returns length of str
*@str: string counted
*Return: returns the length
*/
int len(char *str)
{
	int len = 0;

	if (str != NULL)
	{
		while (str[len])
			len++;
	}
	return (len);
}

/**
* argstostr - a function that concatenates all the arguments of your program
*@ac: count of args passed to the function
*@av:array of arguments
*
*Return: pointer to the new string
*
*/

char *argstostr(int ac, char **av)
{
	char *new_string = NULL;
