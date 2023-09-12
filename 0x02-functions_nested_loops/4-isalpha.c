#include <stdio.h>
#include "main.h"
/**
 *_isalpha - check for lower case
 *@c: the character to be checked
 *
 * Return: 1 if c is a letter, 0 if c is not a letter
 */
int _islower(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
