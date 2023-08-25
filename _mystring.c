#include "main.h"
/**
 * _mystring - prints a string
 * @str: string
 * Return: will return the numbers of bytes
 */
int _mystring(char *str)
{
	int x, str_count = 0;

	if (str)
	{
		for (x = 0; str[x] != '\0'; x++)
		{
			_myputchar(str[x]);
			str_count += 1;
		}
	}
	return (str_count);
}
