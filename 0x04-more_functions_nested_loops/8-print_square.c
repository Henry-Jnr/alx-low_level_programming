#include "main.h"
/**
 * print_square -  prints a square, followed by a new line
 * @size: the size of the square
 * Return: Always 0
 */

void print_square(int size)
{
	int x, y;

	if (size > 0)
	{
		for (y = 0; y < size; y++)
		{
			for (x = 0; x < size; x++)
				putchar('#');

			if (y == (size - 1))
				continue;
			putchar('\n');
		}
	}
	putchar('\n');
}
