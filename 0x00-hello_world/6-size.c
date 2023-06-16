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
float e;
printf("%lu",sizeof(a));
printf("%lu",sizeof(b));
printf("%lu",sizeof(c));
printf("%lu",sizeof(d));
printf("%lu",sizeof(e));
return (0);
}
