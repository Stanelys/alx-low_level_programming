#include "main.h"

/**
 * puts2 - function that print only one character out of two
 * starting with the first character
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int longi = 0;
	int o;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	t = longi - 1;
	for (o = 0 ; o <= t ; 0++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}
