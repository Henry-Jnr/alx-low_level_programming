#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 * Program to print base 16 numbers in lower case
 */
int main(void)
{
	int a;
	char letter;

	for (a = 0; a < 10; a++)
		putchar((a % 10) + '0');
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	putchar('\n');

	return (0);
}
