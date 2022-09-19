#include "main.h"

/**
 * _strcpy - copy and paste string
 * @dest: destination
 * @src: source
 *
 * Return: destination
 */

char *_strcpy(char *dest, char *src)
{
	int inc = 0;

	while (*(str + inc) != '\0')
	{
		*(dest + inc) = *(str + inc);
		inc++;
	}
	*(dest + inc) = '\0';

	return (dest);
}
