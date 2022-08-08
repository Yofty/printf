#include "main.h"
#include <stdarg.h>

/**
 * _printf -  produces output according to a format
 * @format : is a character string
 *
 * Return: the number of characters printed (x)
 */

int _printf(const char *format, ...)
/**{
	int x;
	va_list a;
	
	va_start (a, format);
	x = vfprintf (stdout, format, a);
	va_end (a);
	return (x);
}*/
{
	int printed_chars;
	con_vert f_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{NULL, NULL}
	};
	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);

	/*Calling handle_sp function*/
	printed_chars = handle_sp(format, f_list, arg_list);
	va_end(arg_list);
	return (printed_chars);
}
