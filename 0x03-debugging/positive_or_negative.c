#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return:  Always 0 (Success)
 * @i: Input number
 */
int main(void)
{
	int i;

/*	srand(time(0));*/
/*	i = rand() - RAND_MAX / 2;*/
	/* your code goes there */
if (i < 0)
{
printf("%d is negative\n", i);
}
else if (i == 0)
{
printf("%d is zero\n", i);
}
else
{
printf("%d is positive\n", i);
}
return (0);

}
