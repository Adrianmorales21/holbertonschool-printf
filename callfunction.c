#include "main.h"
int call_functions(const char* format, va_list args)
{
    int i, pc;
    pc = 0;

    for (i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%') {
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
		print_per();
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
        } else {
            _putchar(format[i]);
            pc++;
        }
    }

    return pc;
}

