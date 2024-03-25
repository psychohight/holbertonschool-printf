#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
int print_string(char *str);
/**
 * print_string - Function that print a string
 *
 *
 * @argc: le nombre d'argument
 * Return: le nombre de caractere a imprimer
 */
int print_string(char *str)
{
  int i = 0, count = 0;
    if (str == NULL)
      str = "(null)";
  count = count + 6;
  for (i = 0 ; str[i] != '\0' ; i++)
    {
    putchar(str[i]);
  count = count + 1;
    }
  return (count);
}


/**
 * main - Entry point
 *
 * Return: always 0
 */
int main (void)
{
  int i;
  i = print_string("hello");
}
