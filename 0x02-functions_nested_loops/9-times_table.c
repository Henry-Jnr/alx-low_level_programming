#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 */
void_times_table(void)
{
	int num, multi, prod;

	for (num = 0; num <= 9; num++)
	{
		putchar('0');
		putchar(',');
		putchar(' ');
		for (multi = 1; multi <= 9; multi++)
		{
			prod = (num * multi);
			if ((prod / 10) > 0)
			{
				putchar((prod / 10) + '0');
			}
			else
			{
				putchar(' ');
			}
			putchar((prod % 10) + '0');

			if (multi < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
}
