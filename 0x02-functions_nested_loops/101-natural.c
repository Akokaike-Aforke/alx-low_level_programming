#include <stdio.h>
#include <stdlib.h>
/**
 * main - Return: 0 Always
 *natural_Numbers - list natural numbers
 *
 * Return: voi
 */
void natural_Numbers(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
		printf("%d\n", sum);
	}
}
int main(void)
{
	natural_Numbers();
	return (0);
}

