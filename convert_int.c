#include "main.h"

/**
 * convert_int - convert to int and print it
 * @args: list
 * Return: print count
*/

int convert_int(va_list args)
{
	int num = va_arg(args, int);
	int print_count = 0, num_digits = 0, t = num, j = 1, div = 1;

	if (num < 0)
	{
		print_count += _putchar('-');
		num = -num;
	}
	if (num == 0)
	{
		print_count += _putchar('0');
		return (print_count);
	}


	while (t != 0)
	{
		t /= 10;
		num_digits++;
	}

	for (; j < num_digits; j++)
		div *= 10;
	while (div != 0)
	{
		int digit = num / div;

		print_count += _putchar(digit + '0');
		num %= div;
		div /= 10;
	}
	return (print_count);
}
