#include <stdio.h>

/**
 * main - prints single digit numbers except 2,4,6,8
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int x;

    for (x = '0'; x <= '9'; x++)
    {
        if (x != '2' && x != '4' && x != '6' && x != '8')
            putchar(x);
    }
    putchar('\n');

    return (0);
}
