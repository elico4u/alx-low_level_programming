#include "main.h"

/**
 * _isalpha - checks for char alphabet
 * @c: this is the character that is to be checked
 * Return: It returns 1 if character is letter, lower or upper else returns 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
