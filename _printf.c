#include "main.h"
/**
 * _printf - prints output to stdout
 * @format: format specifier
 * Return: returns number of bytes
 */
int _printf(const char *format, ...)
{
	int y, count = 0, str_count;
	char c;
	va_list args;

	va_start(args, format);
	for (y = 0; format[y] != '\0'; y++)
	{
		if (format[y] != '%')
		{
			_myputchar(format[y]);
		}
		else if (format[y + 1] == 'c')
		{
			_myputchar(va_arg(args, int));
			y++;
		}
		else if (format[y + 1] == 's')
		{
			str_count = _mystring(va_arg(args, char *));
			y++;
			count += (str_count - 1);
		}
		else if (format[y + 1] == '%')
		{
			_myputchar('%');
			y++;
		}
		else
		{
			_myputchar(format[y]);
			y++;
		}
		count += 1;
	}
	va_end(args);
	return (count);
}
