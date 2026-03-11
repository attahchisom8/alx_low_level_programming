#include <stdio.h>
#include "main.h"

/**
 * main - Execution entey point
 *
 * Return: void
 */

 int main(void)
 {
	char s1[98] ="Hello ";
	char s2[] = "World!";
	char *ptr;

	printf("%s\n", s1);
	printf("%s\n", s2);
	ptr = _strncat(s1, s2, 1);
	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("%s\n", ptr);

	ptr = _strncat(s1, s2, 102);
	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("%s\n", ptr);

	return (0);
 }