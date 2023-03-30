#include "main.h"
/**
 * _printf - custom printf function
 * @format : pointer to the input
 * Return: number of characters printed if format is not NULL and not empty,
 *         -1 otherwise
 */
int _printf(const char* format, ...)
{
    va_list args;
    int pc;

    if (format == NULL || format[0] == '\0')
        return -1;

    va_start(args, format);
    pc = call_functions(format, args);
    va_end(args);

    return pc;
}


