#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * _printf - function that works like main function in C
 * @format: pointer
 * Return: variable
 */

int _printf(const char *format, ...)
{
	int p = 0, z = 0;

	va_list(args);
	va_start(args, format);

	while (format[p] != '\0')
	{
		if (format[p] == '%')
		{
			switch (format[p + 1])
			{
				case 'c':
				{
					z += print_letter(va_arg(args, int));
					break;
				}
				case 's':
				{
					z += print_string(va_arg(args, char *));
					break;
				}
				case '%':
				{
					z += print_per();
					break;
				}
				case 'i':
				case 'd':
				{
					z += print_int(va_arg(args, int));
					break;
				}
				default:
					z += print_per();
					z += print_letter(format[p + 1]);
				break;
			}
			p += 2;
		}

		else
		{
			z += print_letter(format[p]);
			p++;
		}
	}

	va_end(args);
	return (z);
}
