#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print if number is positive, zero or negative
 *
 * Description: using the main function 
 * this program prints "programming is positive, negative or zero."
 * Return: 0
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RANDMAX / 2;
   /* your code goes here*/
if (n > 0)
{
	printf("%i is positive\n", n);
}
else if (n == 0)
{
	printf("%i is zero\n", n);
}
else if (n < 0)
{
	printf("%i is negative\n", n);
}
return (0);
}
