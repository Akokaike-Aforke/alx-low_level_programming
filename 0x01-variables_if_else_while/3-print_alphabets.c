#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 Always
 */
int main(void)
{
	char letter = 'z';

	while (letter > 'A')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
