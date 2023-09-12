#include <stdio.h>
#include "main.h"
/**
 *print_sign - check for positive or negative number
 *@n: the character to be checked
 *
 * Return: 1 if n is positive, 0 if n is 0, return -1 if n is negative
 */
int print_sign(int n)
{
	if (n > 1)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	_putchar('1');
	return (-1);
}
