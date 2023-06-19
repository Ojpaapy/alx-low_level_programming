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
int m;
srand(time(0));
n = rand() - RAND_MAX / 2;
m = n%10;
if (m > 5)
printf("Last digits of %d is %d and its greater than 5\n", n, m);
if (m == 0)
printf("Last digits of %d is %d and its greater than 0\n", n, m);
if (m < 6 && m != 0)
printf("Last digits of %d is %d and its less than 6 and not 0\n", n, m);
return (0);
}

