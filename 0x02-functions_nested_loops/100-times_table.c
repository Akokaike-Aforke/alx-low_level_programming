#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *print_times_table - prints times table
 *@n: the timestble to print
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i;
	int j;

	if (n > 15 || n == 0)
		return;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			printf("%d, ", i * j);
		}
		_putchar('\n');
	}
}
