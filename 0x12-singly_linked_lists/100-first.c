#include <stdio.h>

/**
* premain - prints strings before the main function is executed
*
* Return: void
*/
void __attribute__((constructor)) premain(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
