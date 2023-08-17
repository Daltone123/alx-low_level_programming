#include <unistd.h>

/**
 * _putchar - writes characters to the stdout
 * @c: the parameter to print
 * Return: returns 1 on success and -1 otherwise
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
