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
int dayOfYear = convert_day(month, day);

if (is_leap_year(year) && month > 2)
{
dayOfYear++;
}

if (is_leap_year(year) && month == 2 && day == 29)
{
printf("Day of the year: %d\n", dayOfYear);
printf("Remaining days: %d\n", 366 - dayOfYear);
}
else if (is_valid_date(month, day, year))
{
printf("Day of the year: %d\n", dayOfYear);
printf("Remaining days: %d\n", 365 - dayOfYear);
}
else
{
printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
}
}
