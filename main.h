#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>


/**
 * struct formatSelect - function to check for formats
 * @ptr: specifier type
 * @fun: The print function to use
*/

typedef struct formatSelect
{
	char *ptr;
	int (*fun)();
} formatSelect;

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list args);
int print_string(va_list args);
int convert_int(va_list args);
int print_binary(va_list arg);
int stringlen(char *str);


#endif
