#include "main.h"
#include <stdio.h>
#include <stdlib.h>  
#include <stdarg.h>
/**
 * _putchar - Function that print caractere
 *
 * @c: the caractere to print
 *
 * Return: number of byte
 */
int _putchar(char c)
{
  retrun (write(1, &c, 1));
}
/*
*print_c - print a char
*@c : char
*Return: return 1
*/

print_c (va_list argc)
{
    char c;
    c = va_arg(argc, int);
    _putchar (c);
    return (1);
}
