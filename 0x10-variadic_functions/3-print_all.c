#include <stdarg.h>
#include <stdio.h>

/**
* print_all - prints anything
* @format: list of types of arguments passed to the function
*/
void print_all(const char * const format, ...)
{
va_list args;
int i = 0, j;
char *sep = "", *str;

void (*print_func[])(va_list) = {
(void *)print_char,
(void *)print_int,
(void *)print_float,
(void *)print_string
};

char print_type[] = "cifs";

va_start(args, format);
while (format && format[i])
{
j = 0;
while (j < 4 && format[i] != print_type[j])
j++;
if (j < 4)
{
printf("%s", sep);
print_funcj;
sep = ", ";
}
i++;
}
printf("\n");
va_end(args);
}

/**
* print_char - prints a char
* @args: va_list of arguments
*/
void print_char(va_list args)
{
printf("%c", va_arg(args, int));
}

/**
* print_int - prints an int
* @args: va_list of arguments
*/
void print_int(va_list args)
{
printf("%d", va_arg(args, int));
}

/**
* print_float - prints a float
* @args: va_list of arguments
*/
void print_float(va_list args)
{
printf("%f", va_arg(args, double));
}

/**
* print_string - prints a string
* @args: va_list of arguments
*/
void print_string(va_list args)
{
char *str = va_arg(args, char*);

if (str == NULL)
str = "(nil)";
printf("%s", str);
}
