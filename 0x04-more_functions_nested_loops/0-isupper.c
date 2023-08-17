#include "main.h"
/**
 * _isupper - checking for uppercase characters
 * @c: the function parameter to be checked
 * Return: 1 if succes else 0
 */
int _isupper(int c)
{
	if (c >= 'a' && c <= 'Z')
		return (1);

	else
		return (0);


}
