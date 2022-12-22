#include "maain.h"

/**
 * _strncpy - copys a string with n
 * @dest: copy toZZ
 * @src: copy froom
 * @n: number of char to be copied
 * Return: dest
 */
char *_strncopy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = src[j];
		j++;
	}

	return (dest);
}
