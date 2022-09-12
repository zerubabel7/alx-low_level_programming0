#include <stdio.h>
/**
 * main - write a program that prints all single digit number of base 10
 * Description: using tha main function
 * print all single digit number of base 10 starting from 0
 * Return: 0
 */
int main(void)
{
int n;
for (n = '0' ; n <= '9' ; n++)
{
	putchar(n);
}
putchar('\n');
return (0);
}
