#include "main.h"

/**
 * _strpbrk - searches a string for bytes
 * @s: string input
 * @accept: characters to look for
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	char *add = NULL;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[j] == accept[i])
			{
				if (add == NULL)
					add = &(s[j]);
				if (&(s[j]) < add)
					add = &(s[j]);
			}
		}
	}
	return (add);
}
