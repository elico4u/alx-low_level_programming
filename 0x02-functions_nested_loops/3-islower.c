#include "main.h"

/**
 * _islower - checks if a character is lowercase
 * @c: this is the character to be checked
 * Return: 1 if the character is lowercase else returns 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
