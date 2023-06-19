#include <stdio.h>
/**
 * main - -printing sizes available on cpu
 * Return: 0 (success)
 */

int main(void)
{
printf("size of a char: %c byte(s)\n", Sizeof(char));
printf("size of a int: %d byte(s)\n", Sizeof(int));
printf("size of a long int: %ld byte(s)\n", Sizeof(long int));
printf("size of a long long int: %lld byte(s)\n", Sizeof(long long int));
printf("size of a float: %f byte(s)", Sizeof(float));
return (0);
}
