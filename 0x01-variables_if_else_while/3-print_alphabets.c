#include <stdio.h>

/**
 * main - print the alphabet in lowercase,uppercase and follow by a new line.
 *
 * Description: using the main function 
 * print the alphabet in lowercase and uppercase
 * Return: 0
 */
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
	putchar(ch);
}
for (ch = 'A' ; ch <= 'Z' ; ch++)
{
	putchar(ch);
}
putchar('\n');
return (0);
}
