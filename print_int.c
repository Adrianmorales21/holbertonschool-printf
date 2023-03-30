#include "main.h"
int print_int(int n)
{
    int digits = 0;
    int neg = 0;

    if (n < 0) {
        neg = 1;
        _putchar('-');
        digits++;
        n = abs(n);
    }

    if (n / 10)
        digits += print_int(n / 10);

    _putchar(n % 10 + '0');
    digits++;

    return (digits + neg);
}

