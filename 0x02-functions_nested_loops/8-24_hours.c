#include "main.h"
/*
 *jack_bauer - prints time
 */
void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i <= 22; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			_putchar(i);
			_putchar(':');
			_putchar(j);
			_putchar('\n');
		}
	}
}
