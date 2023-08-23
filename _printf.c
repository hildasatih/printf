#include "main.h"
/**
 * _printf - prints output to stdout
 * @format: format specifier
 * Return: returns number of bytes
 */
int _printf(const char *format, ...)
{
	int i, count = 0, str_count;
	char c;
	va_list args;

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			format++;
			if (format[i] == '\0')
				break;
			if (format[i] == 'c')
			{
				c = va_arg(args, int);
				_myputchar(c);
				count++;
			}
			else if (format[i + 1] == 's')
			{
				str_count = _myputs(va_arg(args, char*));
				i++;
				count += (str_count - 1);
			}
			else if (format[i] == '%')
			{
				_myputchar('%');
				count++;
			}
		}
		else
		{
			_myputchar(format[i]);
			count++;
		}
		format++;
	}
	end_arg(args);
	return (count);
}	
