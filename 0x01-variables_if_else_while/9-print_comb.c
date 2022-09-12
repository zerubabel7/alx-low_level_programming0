#include <stdio.h>
/**
 * main - write a program that prints all possible combination.
 * Description: using the main function
 * this program prints all possible combinations of single numbers
 * Return: 0
 */
int main(void)
{
int c;
for (c = 48; c <= 57; c++)
{
	if (c != 57)
	{
		putchar(',');
		putchar(' ');
	}
}
putchar('\n');
return (0);
}
