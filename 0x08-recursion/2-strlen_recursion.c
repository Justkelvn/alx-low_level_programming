/*
 * File: 2-strlen_recursion.c
 * Auth: smone
 */

#include "main.h"

/**
 * _strlen_recursion - Returns the lenght of a string.
 * @s: The string to be measured.
 *
 * Return: The lenght of the string.
 */
int_strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}

	return (len);
}
