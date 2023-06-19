#include <stdio.h>
/**
 * main - -printing sizes available on cpu
 * Return: 0 (success)
 */

int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;
printf("size of a char: %lu byte(s)\n", (unsigned long)Sizeof(a));
printf("size of a char: %lu byte(s)\n", (unsigned long)Sizeof(b));
printf("size of a char: %lu byte(s)\n", (unsigned long)Sizeof(c));
printf("size of a char: %lu byte(s)\n", (unsigned long)Sizeof(d));
printf("size of a char: %lu byte(s)\n", (unsigned long)Sizeof(f));
return (0);
}
