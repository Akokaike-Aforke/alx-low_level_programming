#include <stdio.h>
#include "main.h"
/**
 * print_alphabet(void) - print alphabets
 *
 * Return 0
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
	}
	putchar('\n');
}
