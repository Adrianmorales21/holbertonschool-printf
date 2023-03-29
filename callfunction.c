#include "main.h"
int call_functions(const char* format, ...)
{
	 int i, pc;
	 va_list args;
	 va_start(args, format);
	 
    for (i = 0; format[i] != '\0'; i++) {
        switch (format[i]) {
            case 's': {
                char* str = va_arg(args, char*);
		pc += print_string (str);
                break;
            }
            case 'c': {
                char a = va_arg(args, int);
                _putchar(a);
		pc++;
                break;
            }
            default:
                break;
        }
    }
    va_end(args);

    return (pc);
}
