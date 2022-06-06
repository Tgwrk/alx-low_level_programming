#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Check sign on int
 *
 * Return: 0
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
