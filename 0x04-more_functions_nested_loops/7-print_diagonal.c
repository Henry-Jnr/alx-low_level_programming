#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int length, gap;

	if (n > 0)
	{
		for (length = 0; length < n; length++)
		{
			for (gap = 0; gap < length; gap++)
				putchar(' ');
			putchar('\\');

			if (length == (n - 1))
				continue;
			putchar('\n');
		}
	}
	return (0);
}
