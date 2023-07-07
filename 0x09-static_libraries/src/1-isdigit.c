#include "main.h"

/**
 * _isdigit - check if number is between 0 to 9
 * @c: input to be checked
 *
 * Return: 1 if is a number between 0 to 9, 0 otherwise
 */
int _isdigit(int c)
{
        if (c >= 48 && c <= 57)
        {
                return (1);
        }
        else
        {
                return (0);
        }
}
