#include "main.h"

/**
 * stringlen - get the string length
 * @str: given string
 * Return: string length
*/
int stringlen(char *str)
{
	int r;

	for (r = 0; str[r] != '\0'; r++)
	;

	return (r);
}
