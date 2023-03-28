#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _print - function that works like main function in C
 * @i: variable
 * @a: variable
 * Return: variable
 */

int _printf(const char *format, ...)
{
	int i, a
	va_list j;
	va_start (j, format);
	i = 0 
	a = 0

	while (format[i] != '\0')
	{
		if (format[i] == '\0')
		{
			switch(format[i]
			{ 
				case 'c':
					a += print_letter(va_arg(j, char));
					break;
			
			case 's':
			
				a += print_string(va_arg(j, char *));
				break;
			
			case '%':
			
				a += print_letter('%');
				break;
			
			default;
			break;
			
			else
			
				a += print_letter(format[i]);
			}
			i++;
		}
	}
	va_end(j);
	return (a);
}


