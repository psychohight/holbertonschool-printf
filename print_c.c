#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/*
*print_c - print a char
*@c : char
*Return: return 1
*/

print_c (va_list argc)
{
    c = va_arg(argc, int);
    _putchar (c);
    return (1);
}

