#include "main.h"
/**
 * print_last_digit - Prints the last digit of input numbers
 *
 * @a: Input number
 * Return: value of the last digit
 */
int print_last_digit(int a)
{
	int b;

	b = a % 10;

	if (b < 0)
		b *= -1;
	putchar(b + '0');

	return (0);
}
