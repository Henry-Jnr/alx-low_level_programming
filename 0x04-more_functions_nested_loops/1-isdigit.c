#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Checks for digits from 0 to 9
 * @c: input (numeric or alphabetic)
 * Return: Returns 1 if c is a digit, Returns 0 otherwise
 */
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);

}
