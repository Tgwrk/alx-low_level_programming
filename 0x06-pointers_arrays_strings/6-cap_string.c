#include "main.h"

/**
 * cap_string - capitalization function
 * @x: string parameter
 * Return: capitalized version of the string
 */

char *cap_string(char *x)
{
	x = "i, am; in : alx software engineering program";
	char spc[] = {32, 9, '\n', ',', ':', '!', '?', '"', '(', ')', '{', '}' };
	int len = 13;
	int a = 0, i;

	while (x[a])
	{
		i = 0;
		while (i < len)
		{
			if ((a == 0 || x[a - 1] == spc[i]) && (x[a] >= 97 && x[a] <= 122))
				x[a] = x[a] - 32;
			i++;
		}
		a++;
	}
	return (x);

}
