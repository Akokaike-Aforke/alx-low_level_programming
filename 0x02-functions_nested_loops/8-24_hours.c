#include "main.h"
/*
 *jack_bauer - prints time
 */
void jack_bauer(void)
{
	char i;
	char j;

	for (i = 0; i <= 22; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			_putchar(i + '0');
			_putchar(':');
			_putchar(j + '0');
			_putchar('\n');
		}
	}
}
