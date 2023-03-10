#include "main.h"
/**
 * more_numbers - prints numbers from 0 to 14, 10 times
 *
 * Return: Always 0
 */

void more_numbers(void)
{
	int x, count;

	for (count = 0; count <= 9; count++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x > 9)
				putchar((x / 10) + '0');
			putchar((x % 10) + '0');
		}
		putchar('\n');
	}
}
