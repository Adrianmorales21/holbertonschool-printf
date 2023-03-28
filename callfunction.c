#include "main.h"
/**
 *
 *
 *
 */
int (*cf(char *s)(char))
{
	fp_t cp [] = {
		{"c", _putchar},
		{"s", print_string},
		{NULL, NULL},
	};

	int c = 0;

	while (cp[c].fp != NULL && cp[c].fp != s)
		c++;

	return(cp[c].pt);
}
