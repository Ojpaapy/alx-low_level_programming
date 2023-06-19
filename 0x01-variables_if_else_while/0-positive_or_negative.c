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
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positve\n", n);
}
else if (n == 0)
{
printf("%d is equal\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}
