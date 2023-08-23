#include "main.h"
/**
 * _myputs - prints a strin
 * @c: string
 * Return: number of bytes
 */
int _myputs(char *c)
{
        int count = 0;
        if(c)
        {
                for(count = 0; c[count] != '\0'; count++)
                {
                        _myputchar(c[count]);
                }

        }
        return (count);
}
