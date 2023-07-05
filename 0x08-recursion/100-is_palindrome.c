#include "main.h"

int is_palindrome(char *s);

int main(void)
{
    if (is_palindrome("radar"))
        _putchar('1');
    else
        _putchar('0');

    if (is_palindrome("hello"))
        _putchar('1');
    else
        _putchar('0');

    _putchar('\n');

    return 0;
}

int is_palindrome(char *s)
{
    int length = 0;
    int i = 0;

    while (s[length] != '\0')
        length++;

    for (i = 0; i < length / 2; i++)
    {
        if (s[i] != s[length - i - 1])
            return 0;
    }

    return 1;
}

