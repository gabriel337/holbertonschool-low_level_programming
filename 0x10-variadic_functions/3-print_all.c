#include "variadic_functions.h"

/**
 * print_all - prints all
 * @format: all the formats tpo be printed
 */
void print_all(const char * const format, ...)
{

	int i;
	va_list list;
	char *string, *comma = "";

	if (!format)
	{
		printf("\n");
		return;
	}
	va_start(list, format);
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", comma, va_arg(list, int));
				comma = ",";
				break;
			case 'i':
				printf("%s%d", comma, va_arg(list, int));
				comma = ",";
				break;
			case 'f':
				printf("%s%d", comma, va_arg(list, int));
				comma = ",";
				break;
			case 's':
				string = va_arg(list, char *);
				if (string == NULL)
					string = "(nil)";
				printf("%s%s", comma, string);
				comma = ",";
				break;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
