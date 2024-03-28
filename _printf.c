#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * _printf - printf function.
 * @format: variable
 *
 * Return: nbytes printed.
 */
int _printf(const char *format, ...)
{
	va_list argc;
	unsigned int i = 0, count = 0;

	if (format == NULL)
		return (-1);

	va_start(argc, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);

			else if (format[i + 1] == '%')
			{
				_putchar('%');
				count++;
				i++;
			}
			else if (get_func(format[i + 1]) != NULL)
			{
				count = count + (get_func(format[i + 1]))(argc);
				i++;
			}
			else
			{
				_putchar(format[i]);
				count++;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}
	va_end(argc);
	return (count);
}

/**
 * get_func - Entry point
 * @c: character to print.
 *
 * Return: 0.
 */
int (*get_func(const char c))(va_list)
{
	match m[] = {
		{'c', print_c},
		{'s', print_str},
		{'d', print_int},
		{'i', print_int},
		{'u', print_int},
		{'o', convert_to_octal},
		{'b', convert_to_binary},
		{'\0', NULL}
	};

	int i;

	for (i = 0; m[i].id != '\0'; i++)
	{
		if (m[i].id == c)
		{
			return (m[i].f);
		}
	}

	return (0);
}
