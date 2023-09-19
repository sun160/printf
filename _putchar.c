#include "main.h"

/**
 * _putchar - function to print char
 * @c: the character to print
 * Return: number of prints
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
