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
   printf("%d is possitve", n);
 else if (n == 0)
   printf("%d is equal to zero", n);
 else
   printf("%d is negative", n);
 return (0);
}
