#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: 0 Always
 */
int main(void)
{
	int num;
	int num2;

	for (num = '0'; num <= '9'; num++)
	{
		for (num2 = '0'; num2 <= '9'; num2++)
		{
			putchar(num);
			putchar(num2);
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
