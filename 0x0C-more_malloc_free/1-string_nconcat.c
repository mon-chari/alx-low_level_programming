#include <stdlib.h>
/**
 * *string_nconcat - function that concatenates two strings
 * @s1: string pointer
 * @s2: string pointer
 * @n: integer input
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}
	unsigned int length_s1 = 0;
	unsigned int length_s2 = 0;

	while (s1[length_s1] != '\0')
	{
		length_s1++;
	}
	while (s2[length_s2] != '\0')
	{
		length_s2++;
	}
	if (n >= length_s2)
	{
		n = length_s2;
	}
	char *concat_string = (char *)malloc(length_s1 + n + 1);

	if (concat_string == NULL)
	{
		return (NULL);
	}
	for (unsigned int i = 0; i < length_s1; i++)
	{
		concat_string[i] = s1[i];
	}
	for (unsigned int i = 0; i < n; i++)
	{
		concat_string[length_s1 + i] = s2[i]
	}
	concat_string[length_s1 + n] = '\0';
	return (concat_string);
}
