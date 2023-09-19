#include "main.h"

/**
 * print_char - print ch
 * @args: list given
 * Return: char num
*/

int print_char(va_list args)
{
	return (_putchar(va_arg(args, int)));
}
