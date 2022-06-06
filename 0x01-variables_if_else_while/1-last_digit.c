#include <stdlib.h>
#include <time.h>

/**
 * main - main block
 *
 * Return:0
 */

int main(void)
{
	int n lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;

	if (lastDigit > 5)
	{
		printf("%d and is greater than 5", lastDigit);
	}
	else if (lastDigit == 0)
	{
		print"(%d and is 0", lastDigit);
	}
	else
	{
		printf("%d and is less than 6 and not 0", lastDigit);
	}
	return (0);
}
