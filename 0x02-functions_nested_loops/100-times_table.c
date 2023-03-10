#include "main.h"
/**
 * print_times_table - prints the times table
 * @n: input number
 * Return: Always 0 (Success)
 */
void print_times_tables(int n)
{
	int a, b, c;

	if (n >= 0; && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				c = a * b;
				if (c > 99)
				{
					putchar(',');
					putchar(32);
					putchar((c / 100) + '0');
					putchar(((c / 10) % 10) + '0');
					putchar((c % 10) + '0');
				}
				else if (c > 9)
				{
					putchar(',');
					putchar(32);
					putchar(32);
					putchar(((c / 10) % 10) + '0');
					putchar((c % 10) + '0');
				}
				else
				{
					if (b != 0)
					{
						putchar(',');
						putchar(32);
						putchar(32);
						putchar(32);
					}
					putchar(c + '0');
				}
			}
			putchar('\n');
		}
	}
}
