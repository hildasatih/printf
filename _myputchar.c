#include "main.h"
/**
 * _myputchar - prints a character
 * @c: char input
 * Return: 1
 */
int _myputchar(char c)
{
        return(write(1, &c, 1));
}
~                
