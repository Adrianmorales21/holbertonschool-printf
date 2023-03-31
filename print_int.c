#include "main.h"
/**
 * print_int- prints integers
 * @n:integer to print
 * Return: numbers printed
 */
int print_int(int n)
{
    int digits = 0;
    int neg = 0;

    if (n == 0) {
        _putchar('0');
        return 1;
    }

    if (n == INT_MIN) 
    { 
        digits += print_int(-(n + 1) / 10);
        _putchar('0' - (n % 10));
        digits++;
        return digits;
    }

    if (n < 0) {
        neg = 1;
        _putchar('-');
        digits++;
        n = -n;
    }

    if (n / 10)
        digits += print_int(n / 10);

    _putchar(n % 10 + '0');
    digits++;

    return (digits + neg);
}

