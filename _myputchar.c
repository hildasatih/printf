#include "main.h"
/**
*_myputchar - prints a single character to output
*@x: character input
*
*Return: returns 1 on success
*/
int _myputchar(char x)
{
	return (write(1, &x, 1));
}
