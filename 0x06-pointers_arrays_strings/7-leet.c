#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @str: The string to be encoded.
 *
 * Return: Char
 */

char *leet(char *str)
{
	int i = 0, j;
	char a[] = {"a4A4e3E3o0O0l1L1t7T7"};

	while str[i] != '\0')
	{
		for (j = 0; j <= 19; j++)
		{
			if (((str[i] >= 65 && str[i] <= 90) ||
			    (str[i] >= 97 && str[i] <= 122)) &&
			    (str[i] == a[j]))
				str[i] = a[j + 1];
		}
		i++;
	}
	return (str);
}
