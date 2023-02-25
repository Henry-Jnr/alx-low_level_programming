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

	for (a = 0; a < 10; a++)
	{
		b = (a % 10);
		putchar(b + '0');
	}
		putchar('\n');

		return (0);
}
