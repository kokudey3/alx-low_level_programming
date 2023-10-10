/**
 * _islower - checks if character is in lowercase
 * @c: character to check if it is lowercase
 *
 * Return: 1 when c is lowercase. 0 is when c ia not lowercase
 */

int _islower(int c)
{
	int result = 0;
	int alpha = 97;
	int max = alpha + 26;

	if (c >= alpha && c < max)
	{
		result = 1;
	}
	return (result);
}
