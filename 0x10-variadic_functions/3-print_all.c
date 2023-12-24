#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_all - prints values based on a format string
* @format: a list of types of arguments passed to the function
* @...: variable number of arguments corresponding to the format string
*/
void print_all(const char *const format, ...)
{
va_list args;
int i = 0;
char c;
int num;
float f;
char *str;
int first_arg = 1;  // Flag to check if this is the first argument

va_start(args, format);

while (format && format[i])
{
if (format[i] == 'c')
{
c = va_arg(args, int);
if (!first_arg)
printf(", ");
printf("%c", c);
}
else if (format[i] == 'i')
{
num = va_arg(args, int);
if (!first_arg)
printf(", ");
printf("%d", num);
}
else if (format[i] == 'f')
{
f = (float)va_arg(args, double);
if (!first_arg)
printf(", ");
printf("%f", f);
}
else if (format[i] == 's')
{
str = va_arg(args, char *);
if (!first_arg)
printf(", ");
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
}
first_arg = 0;  // Reset the flag after the first argument
i++;
}

printf("\n");
va_end(args);
}
