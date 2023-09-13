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

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
		        int u = (i * (j + 1));
			x = u / 10;
			y = u % 10;

			_putchar(y + '0');
			_putchar(x + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
