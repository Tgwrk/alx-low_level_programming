#include "main.h"

/**
 * print_alphabet_x10 - prints the lowercase alphabets
 *
 * Return:0
 */

void print_alphabet_x10(void)
{
	int j;
	int x;

	for (x = 0; x <= 'z'; x++)
	{
		for (j = 'a'; j <= 'Z'; j++)
		{
			_putchar(j);
		}
	}

	 _putchar('\n');
}
