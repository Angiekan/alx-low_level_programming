#include "main.h"

/**
 * _isupper - checks for lowercase character
 * @c: character to check
 * Return: 1 for uppercase character or 0 for anything else
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
