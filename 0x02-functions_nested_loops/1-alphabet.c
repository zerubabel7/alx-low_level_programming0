#include "main.h"

/**
 * main - print out the alphabets
 * Description: using the main function
 * print all lower case alphabets from the function
 * Return: 0
 */

void print_alphabet(void)
{
	int j;

	for (j = 'a' ; j <= 'z' ; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
