#include "main.h"

/**
 * _printf - a variadic function that
 *  prints according to the format
 *  @format: format according to the arg
 *  Return: number of cgar printed
 */
int _printf(const char *format, ...)
{
	int cn = 0;

	va_list ar;

	va_start(ar, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			cn = selector(format, ar, cn);
			format++;
		}
		else
		{
			_myputchar(*format);
			cn++;
			format++;
		}
	}
	va_end(ar);
	return (cn);
}
