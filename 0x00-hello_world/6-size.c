#include <stdio.h>

/**
 * main - -printing sizes available on cpu
 * Return: 0 (success)
 */

int main(void)
{
printf("%lu\n", sizeof(char));
printf("%lu\n", sizeof(int));
printf("%lu\n", sizeof(float));
printf("%lu", sizeof(double));
return (0);
}
