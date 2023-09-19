#include "main.h"
/**
 * _printf - function that print integer if %d or %i found
 *
 * @format : the number to be printed
 *
 * Return: integer
 */

int _printf(const char *format, ...)
{
	int i = 0, flag = 1,fl = 0;
	va_list ptr;

	if (!format)
		return (-1);
	va_start(ptr, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
			handleBuffer(1, &format[i]);
		else
		{
			flag = 1, ++i, fl = 0;
			if (format[i] == '\0' || (format[i] == ' ' && format[i + 1] == '\0'))
			{
				handleBuffer(-1, "");
				return (-1);
			}
			if (format[i] == '%')
			{
				printPercentage();
				flag = 0;
			}
			fl = conversionSpecifires(format[i]);
            (fl) ? searchInSpecfires(format[i+1], &flag, &i, fl, ptr) : searchInSpecfires(format[i], &flag, &i, fl, ptr);
			if (flag)
				handleBuffer(2, &format[i - 1]);
		}
		++i;
	}
	va_end(ptr);
	return (handleBuffer(-1, ""));
}
