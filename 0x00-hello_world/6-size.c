#include <stdio.h>
/**
 *main - Entry point
 *Return: Always o (Success)
 */
int main(void)
{
	int i;
	double d;
	char c;
	print("Size of a char: %lu.\n", (unsigned long)sizeof(c));
	printf("Size of a int: %lu.\n", (unsigned long)sizeof(i));
	printf("Size of a double: %lu.\n", (unsigned long)sizeof(&i));

	return(0);
}
