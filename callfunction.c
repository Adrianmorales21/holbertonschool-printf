#include "main.h"
/**
 * call_functions - function to call the correct printing function.
 * @format: pointer to the input
 * @args: list of the arguments passed
 * Return: number of characters printed if the function works correctly
 *         and -1 if it fails
 */
int call_functions(const char* format, va_list args)
{
    int i, pc;
    pc = 0;

    if (format == NULL || format[0] == '\0')
        return -1;

    for (i = 0; format[i] != '\0'; i++)
    {
        if (format[i] != '%')
        {
            if (format[i] == '\0')
            {
                putchar('\0');
                pc++;
            }
            else
            {
                _putchar(format[i]);
                pc++;
            }
            continue;
        }

        i++;
        if (format[i] == '\0')
            return -1;

        switch (format[i]) {
            case 'c':{
                char c = va_arg(args, int);
                _putchar(c);
                pc ++;
                break;
            }
            case 's':{
                char *str = va_arg(args, char*);
                if (str == NULL)
                    str = "(null)";
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

    return pc;
}
