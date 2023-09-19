#include "main.h"

/**
 * convert_int - convert to int and print it
 * @args: list
 * Return: print count
*/

int convert_int(va_list args)
{
	int print_count = 0, digit, temp ,num, div = 1;

	num = va_arg(args, int);
	
	if (num < 0)
	{
		print_count += _putchar('-');
		num = -num;
	}
	temp = num;

	while (temp / div > 9)
	{
		div *= 10;
	}

	while (div != 0)
	{
		digit = temp / div;

		print_count += _putchar(digit + '0');
		temp %= div;
		div /= 10;
	}
	return (print_count);
}
