#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
int print_string(char *c);
int call_functions(const char* format, va_list args);
int _putchar(char c);
int _printf(const char * format,...);
int print_int(int n);
int print_per(void);

#endif		
