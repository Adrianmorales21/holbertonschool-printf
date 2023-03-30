#include "main.h"
int _printf(const char* format, ...)
{
    va_list args;
    va_start(args, format);
    
    if (format != NULL)
    {
    int pc = call_functions(format, args);
    
    va_end(args);
    return pc;
    }
    return 0;
}
