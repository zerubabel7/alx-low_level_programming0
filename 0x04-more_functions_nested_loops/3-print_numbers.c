#include<stdio.h>
#include "main.h"

/**
 * print_numbers -> print numbers
 * Return: nothing
 */
void print_numbers(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
	}
        putchar(10);
}
