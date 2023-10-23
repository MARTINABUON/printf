#include "main.h"
#include <stdarg.h>
/**
 * _printf - a funtion that takes varirrying arguments
 */
int _printf(const char *format, ...)
{
	int a = 0;

	va_list arglist;

	if (format == NULL)
	{
		return (-1);
	}
	va_start(arglist, format);

	while (*format)
	{
		if(*format != '%')
		{
			write(1, format, 1);
		}
		else
		{
			format++;
		}
