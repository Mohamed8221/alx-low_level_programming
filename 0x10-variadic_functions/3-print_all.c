#include <stdio.h>
#include <stdarg.h>

/**
* print_all - prints values based on a format string
* @format: a format string containing type specifiers
* @...: variable number of arguments corresponding to the format string
*/
void print_all(const char * const format, ...)
{
va_list args;
int i = 0;

va_start(args, format);

while (format && format[i])
{
if (i > 0)
printf(", ");

if (format[i] == 'c')
{
char c = va_arg(args, int);
printf("%c", c);
}
else if (format[i] == 'i')
{
int num = va_arg(args, int);
printf("%d", num);
}
else if (format[i] == 'f')
{
double num = va_arg(args, double);
printf("%f", num);
}
else if (format[i] == 's')
{
char *str = va_arg(args, char *);
if (str)
printf("%s", str);
else
printf("(nil)");
}
i++;

while (format[i] && (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's'))
i++;
}

va_end(args);
printf("\n");
}
