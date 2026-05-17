#include "main.h"

/**
 * set_string - function that sets a pointer to a char
 * @s: A double pointer to  a charater
 * @to: The address we must set s to point to
 *
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
