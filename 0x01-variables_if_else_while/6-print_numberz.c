#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 Always
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar((char)num);
		num++;
	}
	putchar('\n');
	return (0);
}
