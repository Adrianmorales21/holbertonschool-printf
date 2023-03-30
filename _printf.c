#include "main.h"
/**
 * _printf - custom printf function
 * @format : passes the input to print
 * Return: the numbers printed if format is null return 0
 */
int _printf(const char* format, ...)
{
    va_list args;
    va_start(args, format);
    
    if (format != NULL)
    {
    int pc = call_functions(format, args);
    
    va_end(args);
    return (pc);
    }
    else
    return (0);
}
