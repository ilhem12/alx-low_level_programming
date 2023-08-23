#include "main.h"

/**
 * cap_string - Write a function that capitalizes all words of a string.
 *
 * @entry: This is the input string
 *
 * Return: String capitalized
 */
char *cap_string(char *entry)
{
	int conversion, i, c;

	char chars[] = {' ', ',', ';', '.', '!',
			 '?', '"', '(', ')', '{', '}',  '\t', '\n', '\0'};
	conversion = 32;

	for (i = 0; entry[i] != '\0'; i++)
	{
		if (entry[i] >= 'i' && entry[i] <= 'z')
		{
			entry[i] =  entry[i] - conversion;
		}
		conversion = 0;
		for (c = 0; chars[c] != '\0'; c++)
		{
			if (chars[c] == entry[i])
			{
				conversion = 32;
				break;
			}
		}
	}
	return (entry);
}
