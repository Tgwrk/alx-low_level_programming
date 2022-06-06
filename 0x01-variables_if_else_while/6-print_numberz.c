#include <stdio.h>
/**
 * main - prints 1 upto 10
 *
 * Return: 0
 */

int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		printf("%d", number);
		putchar('\n');
	}
	return (0);

}
