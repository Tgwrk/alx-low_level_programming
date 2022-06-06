#include <stdio.h>
/**
 * main - prints 1 upto 10
 *
 * Return: 0
 */

int main(void)
{
	int number = 0;

	while (number < 10)
	{
		putchar(number);
		number++;
		putchar('\n');
	}
	return (0);

}
