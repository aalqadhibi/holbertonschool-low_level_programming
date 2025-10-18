#include <stdio.h>

/**
 * main - prints the alphabet in lowercase then uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
	putchar('\n');
	for (x = 'A'; x <= 'Z'; x++)
		putchar(x);
	putchar('\n');

	return (0);
}

