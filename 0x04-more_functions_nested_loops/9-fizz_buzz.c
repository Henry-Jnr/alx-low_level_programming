#include <stdio.h>

/**
 * main - print numbers from 1 to 100, but 'Fizz' for multiples of 3,
 * 'Buzz' for multiples of 5 & 'FizzBuzz' for multiples of both.
 *
 * Return: Always 0
 */
int main(void)
{
	int x;
	char str[6] = "Fizz ";
	char str2[6] = "Buzz ";
	char str3[10] = "FizzBuzz ";

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0 && x % 5 == 0)
			printf("%s", str3);
		else if (x % 3 == 0)
			printf("%s", str);
		else if (x % 5 == 0)
			printf("%s", str2);
		else
			printf("%d ", x);
	}
	return (0);
}
