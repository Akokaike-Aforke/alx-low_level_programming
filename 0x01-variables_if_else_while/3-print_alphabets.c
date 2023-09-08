#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 Always
 */
int main(void)
{
	char letter = 'a';
	char capital = 'A';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	while (capital <= 'Z')
	{
		putchar(capital);
		capital++;
	}
	putchar('\n');
	return (0);
}
