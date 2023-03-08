#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Checks for digits from 0 to 9
 * @c: input (numeric or alphabetic)
 * Return: Returns 1 if c is a digit, Returns 0 otherwise
 */
int _isdigit(int c)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		if (c == i)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	printf("\n");

	return (0);
}
