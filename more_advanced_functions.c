#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * print_unsigned_int - Function that convert a int to unsigned int
 *
 * @argc: number of argument
 *
 * Return: total of number
 */
int print_unsigned_int(va_list argc)
{
unsigned int nb;
int count = 0;
nb = va_arg(argc, unsigned int);
	help_int(nb, &count);
	return (count);
}
/**
 * help_int - Function that help for convert to unsigned int.
 *
 * @n: number to convert
 * @count: total number
 *
 */
void help_int(unsigned int n, int *count)
{
	if ((n / 10) != 0)
	{
		help_int(n / 10, count);
	}
	_putchar((n % 10) + '0');
		(*count)++;
}

