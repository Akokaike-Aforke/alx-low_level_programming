#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *print_to_98 - return the absolute value
 *@n: the number to start from
 *
 * Return: no return
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		printf("%d, ", n);
		n++;
	}
	Printf("\n");
}
