#include "main.h"

/**
 * _strncpy - copies a string up to n bytes
 * @dest: destination buffer
 * @src: source string
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	/* Copy characters from src to dest */
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	/* Fill remaining bytes with '\0' if any */
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
