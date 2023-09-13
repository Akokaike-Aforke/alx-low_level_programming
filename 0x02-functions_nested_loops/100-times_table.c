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
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (j != 0)
			{
				printf(" ");
				printf(" ");
			}
			if (j != n)
				printf("%d, ", i * j);
			else
				printf("%d", i * j);
		}
		printf("\n");
	}
}
