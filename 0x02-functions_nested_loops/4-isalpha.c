#include "main.h"
/**
 * _isalpha-check if character is lowercase or uppercase
 * @c:character to check if it islowercase.
 * Return:1-if lowercase/uppercase,0-if not.
 */



int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


Task 5
vi 5-sign.c

# include "main.h"
/**
 * print_sign-check the sign of a number.
 *
 * @n:Number whose sign is to be checked.
 * Return:1-if n is greater than 0: 0- if n equals 0:-1-if n is less than 0
 */



int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar ('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
