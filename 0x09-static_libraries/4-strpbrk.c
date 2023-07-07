#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: first string
 * @accept: second string
 * Return: a pointer to the byte in s that matches one of the bytes in
 * accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
        unsigned int i, t;

        for (i = 0; *(s + i) != '\0'; i++)
{
        for (t = 0; *(accept + t) != '\0'; t++)
{
        if (*(s + i) == *(accept + t))
                return (s + i);
}
}
        return ('\0');
        }
