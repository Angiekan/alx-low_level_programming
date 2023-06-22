#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: character to determine
 * Return: 1 for digit character or 0 for anything else
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
