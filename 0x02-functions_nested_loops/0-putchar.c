#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: 0 Always
 */
int main(void)
{
	char word[] = "_putchar";
	int i;

	for (i = 0; word[i] != '\0'; i++)
	{
		_putchar(word[i]);
	}
	_putchar('\n');
	return (0);
}
