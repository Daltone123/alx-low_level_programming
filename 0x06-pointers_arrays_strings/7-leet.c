#include "main.h"

/**
 * leet - leet encoder to encode string
 * @s: string to be encoded
 * Return: encoded string
 */

char *leet(char *s)

{
	int i, j;
	char *a = "aAeEoOtTlT";
	char *b = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == s[j])
				s[i] = b[j];
		}
	}
	return (s);


}
