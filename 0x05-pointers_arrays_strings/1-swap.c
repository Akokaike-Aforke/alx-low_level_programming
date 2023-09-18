#include <stdio.h>
/**
 * swap_int - swap 2 values
 *@a: parameter for first value
 *@b: parameter for second value
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;

}
