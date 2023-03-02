#include <stdio.h>
/**
 * main - prints the sum of Even fibonacci numbers< 4000000
 *
 * Return: Zero (0)
 */
int main(void)
{
	int a = 0;
	long b = 1, c = sum = 2;

	while (c + b < 4000000)
	{
		c += b;

		if (c % 2 == 0)
			sum += c;

		b = c - b;
		a++
	}
	printf("%ld\n", sum);
	return (0);
}
