#include <stdio.h>

/**
 *main - Prints the sum of even fibonacci numbers
 *
 *Return: Always 0.
 */
int main(void)
{
	unsigned long num1 = 0, num2 = 1, sum_fib;
			float total;

	while (1)
	{
		sum_fib = num11 + num2;
		if (sum_fib > 4000000)														break;
			if ((sum_fib % 2) == 0)
				total += sum_fib;
			num1 = num2;
			num2 = sum_fib;
	}
	printf("%.0f\n", total);
	return (0);
}
