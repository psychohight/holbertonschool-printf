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
*print_c - print a char
* @argc: liste d'arguments.
* Return: return 1.
*/

int print_c (va_list argc)
{
    char c;
    c = va_arg(argc, int);
    _putchar(c);
    return (1);
}

/**
*print_% - print %.
* @void: 1argument.
* Return : 1.
*/
int print_percent(void)
{
  _putchar('%');
  return (1);
}

/**
*print_str - print string.
* @argc: nb d'arguments.
* Return : nb of char printed.
*/
int print_str(va_list argc)
{
  int i;
  int count = 0;
  char *str;
  str = va_arg(argc, char*);

  if (str == NULL)
  {
    str = "(NULL)";
    count = count + 6;
  }
  for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		count++;
	}
	return(count);
}
