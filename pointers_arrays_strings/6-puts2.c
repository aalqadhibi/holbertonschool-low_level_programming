#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character, followed by a new line
 * @str: pointer to the string
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	if (!str) /* check if the string pointer is NULL */
		return;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		if (str[i + 1] == '\0') /* avoid going past the end */
			break;
		i += 2;
	}

	_putchar('\n');
}
