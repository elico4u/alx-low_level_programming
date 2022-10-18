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
	print("Size of a char: %lu.\n", (unsigned long)sizeof(c) "byte(s)");
	printf("Size of a int: %lu.\n", (unsigned long)sizeof(i) "bytes(s)");
	printf("Size of a double: %lu.\n", (unsigned long)sizeof(&i) "bytes(s)");

	return(0);
}
