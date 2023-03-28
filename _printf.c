#include "main.h"
/**
 *
 *
 *
 */
int _printf(const char *format, ...)
{

	int i;
	fp_t fp;
	
	va_list list;
	va_start(list, format);
	fp = (va_arg(list, char));
	
	

	for (i = 0; format[i] != '\0'; i++)
	{
		cf(format[i])(fp);
	}

	return (0);
}
