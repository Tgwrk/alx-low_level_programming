#include <stdio.h>

/**
 * main - Returns all lowercase alphabets except for e and q
 *
 * Return : 0
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
			continue;
		else
			putchar(ch);
	}

	putchar ('\n');
	return (0);
}
