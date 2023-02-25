#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lletter;

	for (lletter = 'a'; lletter <= 'z'; lletter++)
		putchar(lletter);
	for (lletter = 'A'; lletter <= 'Z'; lletter++)
		putchar(lletter);
	putchar('\n');
	return (0);
}
