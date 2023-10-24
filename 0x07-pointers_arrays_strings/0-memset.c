#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area
 * pointed to by @s with the constant byte @c
 * @s: pointer to the memory area to fill
 * @b: value to set
 * @n: number of bytes to be filled
 *
 * Return: pointer to the memory area filled @s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	char *memory = s, value = b;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
