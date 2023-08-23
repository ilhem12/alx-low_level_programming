#include "main.h"

/**
 * _strncat - Write a function that concatenates two strings. it will use at
 *            most n bytes from src
 *
 * @dest: This is the output  dest
 * @src: This is the input src
 * @n: This is the number bytes fro src
 *
 * Return: This is my return
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (c = 0; c < n && src[c] != '\0'; c++)
	{
		dest[i] = src[c];
		i++;
	}
	if (c < n)
	{
	dest[i] = '\0';
	}
	return (dest);
}
