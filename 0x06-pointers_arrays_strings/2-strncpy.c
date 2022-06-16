#include "main.h"
#include <string.h>

/**
 * _strncpy - a function
 * @dest: param1
 * @src: param2
 * @n: parram3
 * Return:string
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
