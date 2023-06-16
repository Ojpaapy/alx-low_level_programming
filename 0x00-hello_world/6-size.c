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
printf("%lu\n",sizeof(a));
printf("%lu\n",sizeof(b));
printf("%lu\n",sizeof(c));
printf("%lu\n",sizeof(d));
printf("%lu\n",sizeof(e));
return (0);
}
