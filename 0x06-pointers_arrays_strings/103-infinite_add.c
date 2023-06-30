#include "main.h"
#include <stdio.h>
/**
 * infinite_add - add 2 strings.
 * @n1: string1.
 * @n2: string2.
 * @r: buffer
 * @size_r: buffer size
 * Return: String with all letters in ROT13 base.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a_len = 0, b_len = 0, a, b, sum, biggest;
	int carry = 0;

	while (n1[a_len] != '\0')
	a_len++;
	while (n2[b_len] != '\0')
	b_len++;
	if (a_len > b_len)
	biggest = a_len;
	else
	biggest = b_len;
	if ((biggest + 1) >= size_r)
	return (NULL);
	r[biggest + 1] = '\0';

	while (biggest >= 0)
	{
	a = (a_len > 0) ? (n1[a_len - 1] - '0') : 0;
	b = (b_len > 0) ? (n2[b_len - 1] - '0') : 0;
	if (a_len > 0 || b_len > 0 || carry > 0)
	{
	sum = a + b + carry;
	carry = sum / 10;
	r[biggest] = (sum % 10) + '0';
	}
	else
	{
	r[biggest] = '\0';
	}
	a_len--;
	b_len--;
	biggest--;
	}
	return (r);
}
