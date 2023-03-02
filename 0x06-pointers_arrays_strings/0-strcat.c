#include "1-main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strcat - it takes two argument
 * @desr: destination string
 * @src: string to be appendend to dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
