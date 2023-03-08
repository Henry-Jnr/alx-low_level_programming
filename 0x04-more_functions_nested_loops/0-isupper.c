#include <stdio.h>

/**
 * _isupper - Checks for uppercase character
 * @c: Alphabetical input
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	int x;

	for (x = 'A'; x <= 'Z'; x++)
		if (c == x)
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
