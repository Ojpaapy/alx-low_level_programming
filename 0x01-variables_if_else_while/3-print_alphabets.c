#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - write lower & upper
 * Return: 0 (Success)
 */
int main(void)
{
int lowercase = 'a';
int uppwercase = 'A';
while (lowercase <= 'z')
{
putchar (lowercase);
lowercase += 1;
}
while (uppercase <= 'Z')
{
putchar (uppercase);
uppercase += 1;
}
putchar ('\n');
return (0);
}
