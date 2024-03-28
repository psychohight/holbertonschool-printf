#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * convert_to_binary - Function that convert a int to binary
 *
 * @argc: number of argument
 *
 * Return: total of number
 */
int convert_to_binary(va_list argc)
{
unsigned int nb;
int count = 0;
nb = va_arg(argc, unsigned int);
	help_binary(nb, &count);
	return (count);
}
/**
 * help_binary- Function that help for convert to binary.
 *
 * @n: number to convert
 * @count: total number
 *
 */
void help_binary(unsigned int n, int *count)
{
	if ((n / 2) != 0)
	{
		help_binary(n / 2, count);
	}
	_putchar((n % 2) + '0');
		(*count)++;
}
/**
 * convert_to_octal - Function that convert a int to octal
 *
 * @argc: number of argument
 *
 * Return: total of number
 */
int convert_to_octal(va_list argc)
{
unsigned int nb;
	int count = 0;

	nb = va_arg(argc, unsigned int);
	help_octal(nb, &count);
	return (count);
}
/**
 * help_octal - Function that help for convert to binary.
 *
 * @n: number to convert
 * @count: total number
 *
 */
void help_octal(unsigned int n, int *count)
{
	if ((n / 8) != 0)
	{
		help_octal(n / 8, count);
	}
		_putchar((n % 8) + '0');
		(*count)++;
}
