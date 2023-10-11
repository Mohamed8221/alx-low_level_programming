#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/
void print_remaining_days(int month, int day, int year)
{
if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
{
if (month > 2 || (month == 2 && day == 29))
{
printf("Day of the year: %d\n", 31 + 29 + (month - 3) * 31 - ((4 * month + 23) / 10) + day);
printf("Remaining days: %d\n", 366 - (31 + 29 + (month - 3) * 31 - ((4 * month + 23) / 10) + day));
}
else
{
printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
}
}
else
{
if (month == 2 && day == 29)
{
printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
}
else
{
printf("Day of the year: %d\n", (month - 1) * 31 - ((month * 5 - 2) / 10) + day);
printf("Remaining days: %d\n", 365 - ((month - 1) * 31 - ((month * 5 - 2) / 10) + day));
}
}
}
