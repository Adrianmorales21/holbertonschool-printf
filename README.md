_printf function README
In this project we recreate a custom version function called printf that works like the main function in C. The function takes a string as input and returns a formatted output string based on the format specifier passed in the input string.

Synopsis
This repository holds all the code necessary for our custom printf function to run. Our custom-version currently handles conversion specifiers: c, s, %, d, and i. In essence, you can print any character, string, integer, or decimal number.

Description of each file:
man_3_printf-------------custom manpage for our custom printf function.
main.h-------------------holds prototypes of functions spread across all files
print_int---------------handles %d and %i to print (d) decimal/(i) integers in base 10
print_letter------------handles %c to print a single character
print_per---------------handles %% to print percentage sign
print_string------------handles %s to print a string of characters
printf------------------holds custom printf function
_putchar----------------holds custom putchar function
callfunction.c-----------holds all of the helper function 

Enviroment and language:
Language: C
OS: Ubuntu 20.04.5 LTS
Compiler: gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c 
Style guidelines: Betty Style

How to install and compile:
To use this code, simply clone the repository to your local machine.
git clone https://github.com/Adrianmorales21/holbertonschool-printf.git

Usage
To use the custom printf function, call it in your C program and pass in the format string and any necessary arguments. The function will return a formatted output string based on the format specifier passed in the input string.

Here is an example of how to use the function:

#include "main.h"
#include <stdio.h>

int main(void)
{
    int num = 42;
    char *str = "Hello, world!";
    _printf("This is a number: %d\nThis is a string: %s\n", num, str);
    return (0);
}
------------------------------------------------------------------------
------------------------------------------------------------------------
(terminal)$ gcc -Wall -Werror _Wextra -pedantic -Wno-format *.c
(terminal)$ ./a.out

This will output the following:

This is a number: 42
This is a string: Hello, world!
(terminal)$

The following format specifiers are supported:

%c - print a single character
%s - print a null-terminated string
%% - print a percent sign
%d or %i - print a signed integer

Contributing
Contributions to this project are welcome. To contribute, please follow these steps:

Fork the repository.
Create a new branch.
Make your changes and commit them.
Push your changes to your forked repository.
Create a pull request.

Autors
Adrian Morales and Eduardo Figueroa
