#include "main.h"
/**
 *times_table - Prints times table
 */
void times_table(void)
{
	int i;
	int j;
	int x;
	int y;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 10; j++)
		{
			x = (i * j) / 10;
			y = (i * j) % 10;

			_putchar(x + '0');
			_putchar(y + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
