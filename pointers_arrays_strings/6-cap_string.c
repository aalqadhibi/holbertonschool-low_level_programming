#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: the string to modify
 *
 * Return: pointer to the resulting string
 */
char *cap_string(char *str)
{
	int i = 0;

	/* تابع حتى نهاية السلسلة */
	while (str[i])
	{
		/* إذا كان أول حرف أو يلي فاصل */
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;

		if (i > 0)
		{
			char c = str[i - 1];

			if ((c == ' ' || c == '\t' || c == '\n' || c == ',' ||
			     c == ';' || c == '.' || c == '!' || c == '?' ||
			     c == '"' || c == '(' || c == ')' || c == '{' || c == '}') &&
			     str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}
