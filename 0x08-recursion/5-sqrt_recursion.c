#include "main.h"
#include <stdio.h>

int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - returns the natural swrroot of a number
 * @n: number to calculate the natural aqrt
 * Return: natural sqrt
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - calculates natural square root
 * @n: number to calculate its square root
 * @i: iterate number
 * Return: natural square root
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
