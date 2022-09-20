#include "main.h"

/**
 * _strlen - Returns length of a string
 *
 * @s: string value
 *
 * Return: Length of string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}
