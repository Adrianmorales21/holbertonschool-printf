#include "main.h"
/**
 * print_string- prints a string
 * @str: pointer to the string to print
 * Return: number of characters printed
 */
int print_string(char *str)
{
    int size, written, res;
    if (str == NULL) {
        return 0;
    }

    size = strlen(str);
    written = 0;
    while (written < size) {
        res = write(STDOUT_FILENO, str + written, size - written);
        if (res < 0) {
            return written;
        }
        written += res;
    }
    return written;
}
