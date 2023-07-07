#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: initial segment bytes
 * @accept: accepted bytes
 * Return: number of accepted bytes
 */
unsigned int _strspn(char *s, char *accept)
{
        unsigned int i, t, k;

        for (i = 0; *(s + i) != '\0'; i++)
        {
                k = 1;
                for (t = 0; *(accept + t) != '\0'; t++)
                {
                        if (*(s + i) == *(accept + t))
                        {
                                k = 0;
                                break;
                        }
                }
                if (k == 1)
                        break;
        }
        return (i);
}
