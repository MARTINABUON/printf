#include "main.h"

/**
 * print_char - prints a binary number
 * @arg: the arguements to use
 * @c: the printed characters
 * Return: printed charcaters
 */

int print_char(va_list arg, int c)
{
	int ch = va_arg(arg, int);

	_myputchar(ch);
	return (c + 1);
}
