#include "main.h"

/**
 * _strcat - concatnates the string pointed to by @src to 
 * the end of the string pointed by @dest
 * @dest: string that will be appended
 * @src: string to be concactnated upon
 *
 * Return: return pointer to @dest
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
