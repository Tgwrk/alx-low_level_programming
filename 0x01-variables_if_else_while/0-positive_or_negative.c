#include <stdlib.h>
#include <time.h>
/**
 * more headers goes there
 * betty style doc for function main goes there
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if(n>0)
		printf("%d The random number "+ n + " %d is greater than 0\n");
	else if(n<0)
		printf("%d The random number "+ n + " %d is less than 0\n");
	else
		printf("%d The random number " + n + " %d is 0\n");
		
	return (0);
}
