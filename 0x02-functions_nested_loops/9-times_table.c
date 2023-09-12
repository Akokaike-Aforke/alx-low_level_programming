#include "main.h"
/**
 *times_table - Prints times table
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 10; j++)
		{
			_putchar((i * j) + '0');
			_putchar('\n');
		}
	}
}
