#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - last digits
 * Return: 0 (Success)
 */
int main(void)
{
int lowercase = 'a';
while (lowercase <= 'z')
{
putchar (lowercase);
lowercase += 1;
}
putchar('\n');
return (0);
}
