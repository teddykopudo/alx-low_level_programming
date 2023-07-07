#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
        unsigned int t = 0;
        unsigned int k = 0;

        while (*(dest + t) != '\0')
                t++;
        while (*(src + k) != '\0')
        {
                *(dest + t) = *(src + k);
                t++;
                k++;
        }
        return (dest);
}
