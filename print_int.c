#include "main.h"
#include <stdio.h>

/**
 * print_int - prints an integer
 * @n: integer to be printed
 * Return: number of digits printed
 */
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
