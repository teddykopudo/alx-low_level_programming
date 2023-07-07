#include "main.h"

/**
 * _strcmp - function comparing two strings
 * @s1: char source 1 pointer
 * @s2: char source 2 pointer
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
        int t;

        t = 0;
        while (s1[t] != '\0' && s2[t] != '\0')
        {
                if (s1[t] != s2[t])
                {
                        return (s1[t] - s2[t]);
                }
                t++;
        }
        return (0);
}
