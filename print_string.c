#include "main.h"

/**
 * print_str - print string
 * @args: args list
 * Return: String
 **/

int print_str(va_list args)
{
	int print_count = 0;
	char *str = va_arg(args, char*);

	if (!str)
		str = "(null)";

	while (str[print_count] != '\0')
		print_count += _putchar(str[print_count]);

	return (print_count);
}
