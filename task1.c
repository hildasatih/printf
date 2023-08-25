#include "main.h"
/**
 * _printf - prints output to stdout
 * @format: format specifier
 * Return: returns number of bytes
 */
int _printf(const char *format, ...)
{
	int y = 0, count = 0, int numb;
	va_list args;

	va_start(args, format);
	while (format[y] != '\0')
	{
		if (format[y] != '%')
		{
			_myputchar(format[y]);
		}
		else if ((format[y + 1] == 'd') || (format[y + 1] == 'i'))
		{
			numb = (va_arg(args, int));
			_myints(numb);
			y++;
		}
		count += 1;
		y++;
	}
	va_end(args);
	return (count);
}                         
