#include "main.h"
/**
* check_palindrome - checks if a string is a palindrome
* @s: string to check
* @start: start index of string
* @end: end index of string
*
* Return: 1 if palindrome, 0 otherwise
*/
int check_palindrome(char *s, int start, int end)
{
if (start >= end)
{
return (1);
}
if (s[start] != s[end])
{
return (0);
}
return (check_palindrome(s, start + 1, end - 1));
}
