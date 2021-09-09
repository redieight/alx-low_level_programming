#include "main.h"

/**
 * _strcat - linking two strings
 * @dest: A string to append to
 * @src: A string to add
 *
 * Return: a pointer to the final string
 */
char *_strcat(char *dest, char *src)
{
	int x, y;

	x = 0;
	y = 0;

	while (dest[x] != '\0')
		i++;

	while (src[y] != '\0')
	{
		dest[x] = src[y];
		y++;
		x++;
	}

	dest[x] = '\0';

	return (dest);
}
