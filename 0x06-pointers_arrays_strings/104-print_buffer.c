#include "main.h"


/**
 * is_printable_byte - checks if a byte is pritable
 * @b: The given character (byte)
 *
 * Return: 1 if printable, 0 otherwise
 */

int is_printable_byte(int b)
{
	int k;

	for (k = 32; k <= 126; k++)
	{
		if (b == k)
			return (1);
	}
	return (0);
}


/**
 * print_buffer - prints contents of a buffer in specified format
 * @b: pointer to the buffer
 * @size: size of the buffer
 *
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int min = 0, max = 9;
	int k, p;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	k = min;
	while (k < size)
	{
		printf("%08x: ", k);
		for (p = min; p <= max; p += 2)
		{
			if (p < size)
				printf("%02x", b[p]);
			else
				printf("  ");
			if (p + 1 < size)
				printf("%02x", b[p + 1]);
			else
				printf("  ");
			printf(" ");
		}
		for (p = min; p <= max && p < size; p++)
		{
			if (is_printable_byte(b[p]))
				printf("%c", b[p]);
			else
				printf(".");
		}
		printf("\n");

		min = max + 1;
		k += 10;
		max += 10;
	}
	_putchar('\n');
}
