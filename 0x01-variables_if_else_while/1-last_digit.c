#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Last digit deteremines print statement
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;

	if (m > 5)
		printf("Last digit of %i is %i and greater than 5\n", n, m);
	else if (m ==0)
		printf("Last digit of %i is %i and is 0\n", n, m);
	else
		printf("Last digit 0f %i is %i and is less than 6 and not 0\n", n, m);

	return (0);
}
