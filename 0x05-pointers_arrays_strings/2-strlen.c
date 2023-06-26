#include <stdio.h>
/**
 * _strlen - Return the length of a string
 * @str: the length of a string
 * Return: returns length
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
