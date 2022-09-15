#include "main.h"

/**
 * largest number - returns the largest of 3 numbers
 * @a: first intiger
 * @b: second intiger
 * @c: third intiger
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	if(a >= b && a >= c)
	{
		largest = a;
	}
	if(b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	return (largest);
}
