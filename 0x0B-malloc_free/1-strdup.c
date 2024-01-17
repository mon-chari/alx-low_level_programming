#include <stdio.h>
#include <stdlib.h>
#include "main.h"
		
/**	
 * _strdup - function that returns a pointer to a newly allocated space in memory	
 * @str: char	
 * Return: 0		
 */
		
char *_strdup(char *str)
		
{
	char *d_str;		
	int i, r = 0;

	if (str == NULL)
	{	
		return (NULL);
	}
		
	i = 0;
		
	while (str[i] != '\0')
	{	
		i++;
	}

	d_str = malloc(sizeof(char) * (i + 1));
		
	if (d_str == NULL)
	{
		return (NULL);
	}		
	for (r = 0; str[r]; r++)
	{
		d_str[r] = str[r];
	}	
	return (d_str);
		
}
