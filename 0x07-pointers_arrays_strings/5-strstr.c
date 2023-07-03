#include "main.h"
/**
 * _strstr - locates first occurence of a substring needle in the string haystack
 * @haystack: entire string
 * @needle: substring
 * Return: pointer to the beginning of the located substring,or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *thaystack;
	char *kneedle;

	while (*haystack != '\0')
	{
		thaystack = haystack;
		kneedle = needle;

		while (*haystack != '\0' && *kneedle != '\0' && *haystack == *kneedle)
		{
			haystack++;
			kneedle++;
		}
		if (!*kneedle)
			return (thaystack);
		haystack = thaystack + 1;
	}
	return (0);
}
