#include "main.h"
/**
 * print_int - prints an integer
 * @n: integer to print
 * Return: number of digits printed
 */
int print_int(int n)
{
    int pc = 0;
    unsigned int num;

    if (n < 0)
    {
        _putchar('-');
        pc++;
        num = -n;
    }
    else
    {
        num = n;
    }

    if (num > 9)
    {
        pc += print_int(num / 10);
    }

    _putchar((num % 10) + '0');
    pc++;

    return pc;
}

