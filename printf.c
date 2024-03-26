#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 *_printf - print string
 * @format: the specifier character
 * Return: nb of character printed.
*/
int _printf(const char *format, ...)
{
	match m[] = {
	{"%c", print_c},
	{"%s", print_str},
	{"%%", print_percent},
	{"%d", print_int},
	{"%i", print_int},
	{"%b", convert_to_binary},
	{"%o", convert_to_octal},
	{"%x", convert_to_octal}
	};
va_list argc;
int i = 0, j, count = 0;
va_start(argc, format);

if (format == NULL || (format[i] == '%' && format[i + 1] == '\0'))
return (-1);

while (format[i] != '\0')
{
	for (j = 0; j < 8; j++)
	{
	if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
		{
		count = count + m[j].f(argc);
		i = i + 2;
		}
	}
_putchar(format[i]);
	i++;
	count++;
}
va_end(argc);
return (count);
}
