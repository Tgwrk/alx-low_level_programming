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
		printf(n, "%d is greater than 0 \n");
	}
	else if (n == 0)
	{
		printf(n, "%d The random number is 0 \n");
	}
	else
	{
		printf(n, "%d The random number is negative \n");
	}
	return (0);
}
