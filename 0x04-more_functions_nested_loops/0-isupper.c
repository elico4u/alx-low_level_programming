#include "main.h"

/**
 * _isupper - this checks if parameter is an uppercase character.
 * @c: input character
 * Return: return 1 if it is an uppercase character, else it returns 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
