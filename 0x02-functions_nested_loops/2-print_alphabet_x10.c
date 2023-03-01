#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int x, count;

	count = 0;

	while (count < 10)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			putchar(x);
		}
		count++;
		putchar('\n');
	}
}
