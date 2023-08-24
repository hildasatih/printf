#include "main.h"
/**
 * _mystring - prints a string
 * @str: string
 * Return: number of bytes
 */
int _mystring(char *str)
{
	int x=0, str_count = 0;
	
	if(str)
	{
		while(str[x] != '\0')
		{
			_myputchar(str[x]);
			str_count += 1;
			x++;
		}
	}
	return(str_count);

}
~                  
