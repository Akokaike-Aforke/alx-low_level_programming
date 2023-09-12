#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *print_last_digit - return the absolute value
 *@num: the value to check
 *
 * Return: the last digit of num
 */
int print_last_digit(int num)
{
	int last_digit = num % 10;

	if (last_digit < 0)
		last_digit *= -1;
	_putchar(last_digit + '0');
	return (last_digit);
}
