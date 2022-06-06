#include <stdio.h>
/**
 * main - Returns the lowercase alphabets in reverse order
 *
 * Return : 0
 */
int main(void)
{
	int alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
		putchar(alphabet);
		putchar('\n');
	}
	return (0);
}
