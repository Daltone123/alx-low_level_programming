#include "main.h"

/**
 * print_most_numbers - prints the numbers 0 to 9
 * Description: excluding 2 and 4
 * Return: returns the numbers 0 to 9 excluding 2 and 4
 */

void print_most_numbers(void)
{
	int x = 0;

	for (; x <= 9; x++)
	{
		if (x == 2 || x == 4)
		{
			continue;
		}
		else
		{
			_putchar(x + '0');
		}
	}
	_putchar('\n');
}
