#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9 except 2 & 4
 *
 * Return: 0 Always
 */

void print_most_numbers(void)
{
	int x;
	for (x = 0; x <= 9; x++)
		if (x != 2 && x != 4)
			_putchar((x % 10) + '0');
	_putchar('\n');
}
