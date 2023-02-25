#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		b = (a % 10);
		putchar(b + '0');
		if (a == 9)
		continue;
	putchar(',');
	putchar(' ');
	}
	putchar('\n');

	return (0);
}
