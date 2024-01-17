#include "main.h"

/**
 * char *_strcpy - function that copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to char to copy to
 * @src: pointer to char to copy from
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for (x = 0; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
