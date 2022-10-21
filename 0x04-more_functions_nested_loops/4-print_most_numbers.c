#include "main.h"

/**
 * print_most_numbers - prints nums betw. 0 to 9
 * (neither 2 nor 4)
 * Return: no return
 */

void print_most_numbers(void)
{
	int ch;

	for (ch = 0; ch < 10; ch++)
	{
		if ((ch != 2) && (ch != 4))
			_putchar(ch);
	}
	_putchar('\n');
}
