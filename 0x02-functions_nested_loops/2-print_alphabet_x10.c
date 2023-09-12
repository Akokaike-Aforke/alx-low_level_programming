#include <stdio.h>
#include "main.h"
/**
 *print_alphabet_x10 - print alphabets in lower case
 */
void print_alphabet_x10(void)
{
	char letter = 'a';
	int i = 0;

	while (i < 10)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		i++;
	}
	putchar('\n');
}
