#include "main.h"

/**
 * print_most_numbers - prints nums betw. 0 to 9
 * (neither 2 nor 4)
 * Return: no return
 */

void print_most_numbers(void)
{
	char c;

	for (c = '0'; ch <= '9'; c++)
	{
		if (!(c == '2' || c == '4'))
			_putchar(c);
	}
	_putchar('\n');
}
