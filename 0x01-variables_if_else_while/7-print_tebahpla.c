#include <stdio.h>
/**
 * main - prints all the lowercase alphabets in reverse order
 *
 * Return : 0
 */
int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
