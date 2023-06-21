#include "main.h"
/**
 * print_last_digit - Prints last digits of a number
 * @n: The number to be tested.
 * Return: Absolute value of number or zero
 */
int print_last_digit(int n)
{
int last;
last = n % 10;
if (last < 0)
{
last = last * -1;
}
_putchar(last + '0');
return (last);
}
