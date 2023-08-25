#include "main.h"
/**
*_myints - determines if number is an integer
*@number: the inputted number
*
*Return: returns  1 on success
*/
int _myints(int number)
{
	int x, x_find, x_val = 0;

	if (number == 0)
	{
		return (0);
	}
	else
	{
	x_find = number / 10;
	_myputchar(number % 10 + '0');
	x_val = x_val + 1;
	return (x_val);
}
