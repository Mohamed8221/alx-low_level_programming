#include <stdio.h>
/**
 * print_alphabet - Prints the alphabet in lowercase followed by a new line.
 */
void print_alphabet(void)
{
char letter = 'a';
while (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n');
}
/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
print_alphabet();
return (0);
}
