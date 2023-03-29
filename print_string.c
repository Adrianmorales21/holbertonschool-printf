#include "main.h"


int print_string(char *c)
{
	int k;

	for (k = 0; c[k] != '\0'; k++)
	{
		putchar(c[k]);
	}

	return (k);
}
