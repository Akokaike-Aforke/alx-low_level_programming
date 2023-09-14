#include <ctype.h>"

/**
 * _isupper - checks for upper case letters
 *
 * Return: 1 if upper case, 0 if lowercase
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	return (0);
}
