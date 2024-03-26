#ifndef MAIN_H
#define MAIN_H
/*standart library*/
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/*prototype of functions.c*/
int print_c(va_list argc);
int _putchar(char c);
int print_percent(void);
int print_str(va_list argc);
int _printf(const char *format, ...);
/**
*struct format - prototype of function
*@id: description
*@f: desc
*/
typedef struct format
{
char *id;
int (*f)();

} match;
#endif
