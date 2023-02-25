#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 * Program to print alphabets except 'e' and 'q'
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}
	return (0);

}
