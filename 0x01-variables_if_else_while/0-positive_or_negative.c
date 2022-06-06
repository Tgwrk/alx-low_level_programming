#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * more headers goes there
 * betty style doc for function main goes there
 * to check if random number is positive,negative, or zero.
 */
int main(void)
{

	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d The random number is greater than 0 \n", n);
	}
	else if (n == 0)
	{
		printf("%d The random number is 0 \n", n);
	}
	else
	{
		printf("%d The random number is negative \n", n);
	}
	return (0);
}
