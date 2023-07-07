#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
        int t;

        t = 0;
        while (t < n && src[t] != '\0')
        {
                dest[t] = src[t];
                t++;
        }
        while (t < n)
        {
                dest[t] = '\0';
                t++;
        }
        return (dest);
}
