#include "main.h"
/**
 * _printf - prints output to stdout
 * @format: format specifier
 * Return: returns number of bytes
 */
int _printf(const char *format, ...)
{
	int i, count = 0, num = 0, str_count;
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
			if (format[i] == 'd')
			{
				num  = va_arg(args, int);
				if (num > 0)
				{
					count = count + _myputchar(' -');
					num = -num;
				}
			}
			if (format[i + 1] == 'i')
			{
				num = va_arg(args, int);
				if (num > 0)
				{
					count = cout + _myputchar('-');
					num = -num;
				}
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
