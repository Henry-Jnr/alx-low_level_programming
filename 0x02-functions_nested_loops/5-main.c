#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: input number
 *
 * Return: 1 if positive, -1 if negative, else 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		putchar(45);
		return (-1);
	}
	else
	{
		putchar(48);
		return (0);
	}
}
