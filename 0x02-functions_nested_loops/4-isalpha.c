/**
 * _isalpha - this program checks for alphabetic character
 * @c: character to be checked
 *
 * Return: 1 if c is a lettr, uppercase or lowercase. 0 if otherwise
 */

int _isalpha(int c)
{
	int a_lower = 97;
	int a_upper = 65;
	int max_lower = a_lower + 26;
	int max_upper = a_upper + 26;
	int result = 0;

	if ((c >= a_lower && c < max_lower) || (c >= a_upper && c < max_upper))
	{
		result = 1;
	}
	return (result);
}
