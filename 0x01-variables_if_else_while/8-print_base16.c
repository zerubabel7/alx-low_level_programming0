#include <stdio.h>
/**
 * main - write a program that prints all numbers of base 16 in lowercase
 * Description: using the main function
 * this program prints all numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
char c;
for (c = '0' ; c <= '9' ; c++)
{
	putchar(c);
}
for (c = 'a' ; c <= 'f' ; c++)
{
	putchar(c);
}
putchar('\n');
return (0);
}
