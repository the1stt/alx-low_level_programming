#include "main.h"

/**
 * string_length - returns the length of a string
 * @str: pointer to the string to calculate length of
 *
 * Return: the length of the string
 */
int string_length(const char *str)
{
int len = 0;

while (*str != '\0')
{
len++
str++;
}
	return (len);
}
