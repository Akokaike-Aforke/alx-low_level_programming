#include <ctype.h>

/**
 * _isdigit - Checks if a character is a digit or not
 * @c: the character to be checked
 *
 * Return: 1 if c is a digit or 0 if not
 */

int _isdigit(int c)
{
	if(isdigit(c))
		return (1);
	return (0);
}
