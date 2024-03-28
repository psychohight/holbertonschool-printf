#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * _putchar - Function that print caractere
 *
 * @c: the caractere to print
 *
 * Return: number of byte
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
* print_c - print a char
* @argc: liste d'arguments.
* Return: return 1.
*/

int print_c(va_list argc)
{
	char c;

	c = va_arg(argc, int);
	_putchar(c);
	return (1);
}

/**
* print_str - print string.
* @argc: nb d'arguments.
* Return: count.
*/
int print_str(va_list argc)
{
	int i;
	char *str;

	str = va_arg(argc, char*);

	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}
/**
 * print_int - print a number.
 * @argc: nb d'arguments.
 * Return: total of nb.
*/
int print_int(va_list argc)
{
	long int n;
	int count, tmp, base;

	count = 0;
	n = va_arg(argc, int);

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
		count++;
	}
	if (n >= 0 && n <= 9)
	{
		_putchar(n + '0');
		count++;
	}
	if (n > 9)
	{
		base = 10;

		while (n / base > 9)
		{
			base *= 10;
		}

		while (base > 0)
		{
			tmp = n / base;
			n = n % base;
			_putchar(tmp + '0');
			base = base / 10;
			count++;
		}
	}
	return (count);
}
