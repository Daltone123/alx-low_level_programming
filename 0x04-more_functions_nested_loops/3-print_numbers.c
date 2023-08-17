#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9 followed by a new line
 * Return: returns the numbers 0 to 9
 */

void print_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		printf(a + '0');
	}
	printf("\n");
}
