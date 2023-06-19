#include <stdio.h>
/**
 * main - -printing sizes available on cpu
 * Return: 0 (success)
 */

int main(void)
{
printf("size of a char: %c byte(s)\n", sizeof(char));
printf("size of a int: %d byte(s)\n", sizeof(int));
printf("size of a long int: %ld byte(s)\n", sizeof(long int));
printf("size of a long long int: %lld byte(s)\n", sizeof(long long int));
printf("size of a float: %f byte(s)", sizeof(float));
return (0);
}
