#include "main.h"

/**
 * print-alphabets > prints lowercase alphabets
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
