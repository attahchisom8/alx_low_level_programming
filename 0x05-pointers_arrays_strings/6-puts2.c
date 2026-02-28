#include "main.h"


/**
 * puts2- prints a string to sdout with a trailing newline, it akips all charactwrs
 * at ods index
 * @str: The given string
 *
 * Return: void
 */

void puts2(char *str)
{
	int k = 0;

	while (str[k] != '\0')
	{
		int odd = 2 * k - 1;

		if (odd > 0 && (odd % 2))
			k++;
		_putchar(str[k]);
		k++;
	}
	_putchar('\n');
}
