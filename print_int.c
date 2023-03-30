#include "main.h"
int print_int(int n)
{
    int digits = 0;
    int neg = 0;

    if (n < 0)
    {
        neg = 1;
        n *= -1;
    }

    if (n / 10)
        digits += print_int(n / 10);

    putchar(n % 10 + '0');
    digits++;

    if (neg)
    {
        putchar('-');
        digits++;
    }

    return (digits);
}
