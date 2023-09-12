#include <stdio.h>
#include "main.h"
/**
 * int _islower(int c) - check for lower case
 *@c: the character to be checked
 *
 * Return: 1 if c is lowercase, 0 if c is  uppercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
