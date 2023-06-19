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
<<<<<<< HEAD
int uppwercase = 'A';
=======
int uppercase = 'A';
>>>>>>> 8b53c9cc487d43cdc463ffc7215433c5cb659c5a
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
