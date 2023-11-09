#include <stdarg.h>
#include <stdio.h>

/**
* print_all - prints anything
* @format: list of types of arguments passed to the function
*
* Return: nothing
*/
void print_all(const char * const format, ...)
{
va_list args;
int i = 0, j, c = 0;
char *str;
const char t_arg[] = "cifs";

va_start(args, format);
while (format && format[i])
{
j = 0;
while (t_arg[j] && format[i] != t_arg[j])
{
j++;
}
if (j < 4 && c)
{
printf(", ");
}
switch (format[i++])
{
case 'c':
printf("%c", va_arg(args, int));
c = 1;
break;
case 'i':
printf("%d", va_arg(args, int));
c = 1;
break;
case 'f':
printf("%f", va_arg(args, double));
c = 1;
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
}
c = 1;
break;
}
}
printf("\n");
va_end(args);
}
