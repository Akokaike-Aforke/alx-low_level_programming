#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: 0 Always
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}