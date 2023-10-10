#include "main.h"

/**
 * print_sign - Function prints the sign of a number
 * @n: number to print the sign 
 *
 * Return: 1 and prints + if n is greater than zero
 * 0 and prints 0 if n is zero
 * -1 and prints - if n is less than zero
 */

int print_sign(int n)
{
	int result;
	char sign;

	if (n > 0)
	{
		result = 1;
		sign = '+';
	}
	else if (n == 0)
	{
		result = 0;
		sign = '0';
	}
	else
	{
		result = -1;
		sign = '-';
	}
	_putchar(sign);
	return (result);
}
