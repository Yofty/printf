#include "main.h"
/**
 * _printf -  produces output according to a format
 * @format : is a character string
 *
 * Return: the number of characters printed (x)
 */
int _printf(const char *format, ...)
{
	int x;
	va_list a;

	va_start (a, format);
	x = vfprintf (stdout, format, a);
	va_end (a);
	return (x);
}
