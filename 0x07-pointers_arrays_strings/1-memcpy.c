#include "main.h"

/**
 * _memcpy - function that copies memory 
 * @dest: to the string memory to be stored.
 * @src: pointer of where memory is copied from.
 * @n: number of bytes.
 *
 * Return: the copied memory with number of bytes changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
