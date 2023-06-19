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
/* your code goes there*/
if (n > 0)
{
printf("%d\n", n);
}
else if (n == 0)
{
printf("%d\n", n);
}
else
{
printf("%d\n", n);
}
return (0);
}
