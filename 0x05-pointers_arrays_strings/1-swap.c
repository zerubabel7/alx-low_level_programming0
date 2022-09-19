#include "main.h"

/**
 * swap_int -> swaps two intiger values
 * @a: first intiger
 * @b: second intiger
 * Return: returns nothing
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}

