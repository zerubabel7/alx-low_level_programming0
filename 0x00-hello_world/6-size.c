#include <stdio.h>

/**
 * main - this showes the size using sizeof function
 *
 * Description: using the main function this program prints the size of different variables.
 * Return: 0
 */
int main(void)
{
	int i;
	char c;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %ldbyte(s)\n", sizeof(c));
	printf("Size of an int: %ldbyte(s)\n", sizeof(i));
	printf("Size of long int: %ldbyte(s)\n", sizeof(li));
	printf("Size of long long int: %ldbyte(s)\n", sizeof(lli));
	printf("Size of float: %ldbyte(s)\n", sizeof(f));
	return (0);
}
