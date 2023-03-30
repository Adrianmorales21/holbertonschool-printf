#include "main.h"
/**
 * call_functions - function to call the correct printing function.
 * @format: pointer to the input
 * @args: list of the arguments passed
 * Return: pc if the function works correctly and -1 if it fails
 */
int call_functions(const char* format, va_list args)
{
    int i, pc;
    pc = 0;

    for (i = 0; format[i] != '\0'; i++)
    {
        if (format[i] != '%')
        {
            _putchar(format[i]);
            pc++;
            continue;
        }

        i++;
        switch (format[i]) {
            case 'c':{
                char c = va_arg(args, int);
                _putchar(c);
                pc ++;
                break;
            }
            case 's':{
                char *str = va_arg(args, char*);
                pc += print_string(str);
                break;
            }
            case '%':{
                _putchar('%');
                pc++;
                break;
            }
            case 'd':
            case 'i':{
                int n = va_arg(args, int);
                pc += print_int(n);
                break;
            }
            default:
                _putchar('%');
                _putchar(format[i]);
                pc += 2;
                break;
        }
    }

    if (pc <= 0) {
        return -1; 
    }

    return pc;
}

