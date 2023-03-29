#include "main.h"
/**
 *
 *
 *
 */
int _printf(const char* format, ...)
{

	int i;
	int (*cf)(const char* format, ...); 
	
	va_list args;
	va_start(args, format);
	cf = &call_functions;
	
	
	

	for (i = 0; format[i] != '\0'; i++)
	{
		cf(&format[i]);
	}

	return (0);
}
