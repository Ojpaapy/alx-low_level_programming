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
printf("%d%d\n", n, lastnumb);
if (lastnumb == 0)
printf("%d%d\n", n, lastnumb);
if (lastnumb < 6 && m != 0)
printf("%d%d\n", n, lastnumb);
return (0);
}

