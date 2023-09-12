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
			_putchar(i + '0');
			_putchar(j + '0');
			_putchar('\n');
		}
	}
}
int main(void)
{
	jack_bauer();
	return (0);
}
