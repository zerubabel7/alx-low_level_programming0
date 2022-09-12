#include <stdio.h>
/**
 * main - write a program that prints out the alphabet in reverse
 * Description: using the main function
 * print out the alphabet in reverse
 * Return: 0
 */
int main(void)
{
char c;
for (c = 'z' ; c >= 'a' ; c--)
{
	putchar(c);
}
putchar('\n');
return (0);
}
