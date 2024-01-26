#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the function
 * @...: variadic arguments
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	int i = 0;
	char c;
	int found;

	va_start(args, format);
	while (format && format[i])
	{
		found = 0;
		c = format[i];
		switch (c)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				found = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				found = 1;
				break;
			case 'f':
				printf("%f", (float) va_arg(args, double));
				found = 1;
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				found = 1;
				break;
		}
		if (format[i + 1] && found)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
