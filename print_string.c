#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_string - function to be called
 * @k: variable
 * Return: 0
 */

int print_string(char *c)
{
	int k = 0;
		while (c[k] != '\0')
		{
			putchar(c[k]);
			k++;
		}
	return (k);
}
