#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 *
 * Return: ALways 0
 */

void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
	if (n > 0)
	{
		putchar('_');
	}
	else
	{
		putchar('\n');
	}
	return (0);
}
