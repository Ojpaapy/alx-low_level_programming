#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - checking positive and negative
 * Return: 0 (Success)
 */

int main(void)
{
int n;
int lastnumb;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastnumb = n % 10;
if (lastnumb > 5)
printf("Last digits of %d is %d and its greater than 5\n", n, lastnumb);
if (lastnumb == 0)
printf("Last digits of %d is %d and its greater than 0\n", n, lastnumb);
if (lastnumb < 6 && m != 0)
printf("Last digits of %d is %d and its less than 6 and not 0\n", n, lastnumb);
return (0);
}

