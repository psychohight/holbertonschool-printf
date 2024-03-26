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
int print_int(va_list argc);
void help(int n, int *count);
int convert_to_binary(va_list argc);
void help_binary(unsigned int n, int *count);
int convert_to_octal(va_list argc);
void help_octal(unsigned int n, int *count);
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
