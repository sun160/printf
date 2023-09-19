#include "main.h"

/**
 * print_binary - covert number to binary and print it
 * @arg: content given
 * Return: number of prints
*/
int print_binary(va_list arg)
{
	int *s;
	int pr_count, j;
	unsigned int n, a;

	n = va_arg(arg, int);
	a = n;
	pr_count = 0;

	while (a / 2)
	{
		pr_count++;
		a /= 2;
	}
	pr_count++;

	s = (int *)malloc(sizeof(int) * pr_count);

	if (s == NULL)
	{
		free(s);
		return (0);
	}

	for (j = 0; j < pr_count; j++)
	{
		s[j] = n % 2;
		n /= 2;
	}

	for (j = pr_count - 1; j >= 0; j--)
	{
	putchar(s[j] + '0');
	}

	free(s);
	return (pr_count);
}
