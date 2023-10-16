#include "main.h"

int _printf(const char *format, ...)
{
	int i;
	va_list ptr;


	if (format == NULL)
		return (-1);
	va_start(ptr, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			format[i + 1] = va_start(ptr);
		}
	}
}
