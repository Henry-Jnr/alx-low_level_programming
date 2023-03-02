#include <stdio.h>
/**
 * main - prints thhe sum of all multiples of 3 or 5 to 1023
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	int x = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			x += i;
		}
		i++;
	}
	printf("%d\n", x);
	return (0);
}
