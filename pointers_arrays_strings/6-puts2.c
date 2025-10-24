#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: pointer to the string
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	if (!str) /* تحقق من أن المؤشر ليس NULL */
		return;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		if (str[i + 1] == '\0') /* إذا وصلنا للحرف الأخير نتجنب أي تجاوز */
			break;
		i += 2;
	}

	_putchar('\n');
}
