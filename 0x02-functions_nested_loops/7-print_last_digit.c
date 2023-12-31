#include "main.h"

/**
 * print_last_digit - Print last digit
 *
 * parameter: integer number
 *
 * Return: integer
 */

int print_last_digit(int n)
{
        if (n < 0)
                n = -1 * (n % 10);
        else
                n = n % 10;

        _putchar(n + '0');
        return (n);
}
