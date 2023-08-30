#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);
/**
 * _sqrt_recursion - returns the natural swrroot of a number
 * @n: number to calculate the natural aqrt
 * Return: natural sqrt
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - calculates natural square root
 * @n: number to calculate its square root
 * @i: iterate number
 * Return: natural square root
 */

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
	{
	return (-1);
	}
	if (sqrt == n)
	{
	return (i);
	}

	return (_sqrt(n, 1));
}
