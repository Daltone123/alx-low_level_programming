#include <stdio.h>

/**
 * main -Prints the first 52 fibonacci numbers
 * Return: Nothing
 */

int main(void)
{
	int i = 0;
	int j = 1, k = 2;

	while (i < 50)
	{
	if (i == 0)
	printf("%d", j);
	else
	{
	k += j;
	j = k - j;
	printf(", %d", k);
	}
	++i;
	}
	printf("\n");
	return (0);
}
