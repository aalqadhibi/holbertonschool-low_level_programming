#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: pointer to the string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	/* احسب طول السلسلة */
	while (s[length] != '\0')
	{
		length++;
	}

	/* اطبع السلسلة من آخر حرف إلى أول حرف */
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
