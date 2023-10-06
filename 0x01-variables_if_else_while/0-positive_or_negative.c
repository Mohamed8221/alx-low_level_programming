#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("%d/n", n);
if (n > 0)
printf(n, "is positive");
else if (n == 0)
printf(n, "is zero");
else
printf(n, "is negative");
return (0);
}
