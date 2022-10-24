#include "main.h"

/**
 * _isdigit - checks if param. is a num btw 0 and 9
 *  @c: input number
 *  Return: 1 if it is a num (0 -9), 0 otherwise
 */

int _isdigit(int c)
{
	if ((c >= '0') && (c < '10'))
		return (1);
	else
		return (0);
}
