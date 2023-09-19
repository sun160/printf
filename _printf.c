#include "main.h"

/**
 * matchFun - match function with specifier
 * @format: str
 * @args: list
 * @funs: array of spec
 * Return: print count.
**/

int matchFun(const char *format, va_list args, formatSelect *funs)
{
	int print_count = 0, i = 0, j = 0;

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;

			while (funs[j].ptr)
			{
				if (format[i] == '%')
				{
					print_count += _putchar('%');
					break;
				}

				else if (*(funs[j].ptr) == format[i])
				{
					print_count += funs[j].fun(args);
					if (print_count == -1)
						return (-1);
					break;
				}
				j++;
			}
			if (funs[j].ptr == NULL)
			{
				print_count += _putchar('%');
				print_count += _putchar(format[i]);
			}
		}
		else
			print_count += _putchar(format[i]);
		i++;
	}
	return (print_count);
}

/**
 * _printf - print with format
 * @format: str
 * Return: print count &  -1 in case of error
*/

int _printf(const char *format, ...)
{
	int print_count = 0;
	va_list args;

	formatSelect funs[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", convert_int},
		{"i", convert_int},
		{NULL, NULL}
	};

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(args, format);

	print_count = matchFun(format, args, funs);

	va_end(args);
	return (print_count);
}
