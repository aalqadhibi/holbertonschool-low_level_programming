#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to the string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int length = 0;
	int i;
	char temp;

	/* حساب طول السلسلة */
	while (s[length] != '\0')
	{
		length++;
	}

	/* عكس السلسلة in-place */
	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = temp;
	}
}
