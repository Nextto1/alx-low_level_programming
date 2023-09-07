#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string to be evaluated
 * Return: 0 if a non-digit is found, 1 otherwise
 */

int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0 (Success)
 */

int main(int argc, char *argv[])
{
	char *s1, *s2;
	int line1, line2, line, i, carry, digit1, digit2, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	line1 = _strlen(s1);
	line2 = _strlen(s2);
	line = line1 + line2 + 1;
	result = malloc(sizeof(int) * line);
	if (!result)
		return (1);
	for (i = 0; i <= line1 + line2; i++)
		result[i] = 0;
	for (line1 = line1 - 1; line1 >= 0; line1--)
	{
		digit1 = s1[line1] - '0';
		carry = 0;
		for (line2 = _strlen(s2) - 1; line2 >= 0; line2--)
		{
			digit2 = s2[line2] - '0';
			carry += result[line1 + line2 + 1] + (digit1 * digit2);
			result[line1 + line2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[line1 + line2 + 1] += carry;
	}
	for (i = 0; i < line - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
