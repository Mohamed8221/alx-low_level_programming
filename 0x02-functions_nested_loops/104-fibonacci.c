#include <stdio.h>
#include <stdlib.h>

/**
* main - prints the first 98 Fibonacci numbers, starting with 1 and 2
*
* Return: 0 on success, 1 on failure
*/
int main(void)
{
int i;
char *a, *b, *c, *tmp;

a = malloc(100); /* allocate memory for the first number */
b = malloc(100); /* allocate memory for the second number */
c = malloc(100); /* allocate memory for the sum */

if (a == NULL || b == NULL || c == NULL) /* check for allocation errors */
{
printf("Error: memory allocation failed\n");
return (1);
}

a[0] = '1'; /* initialize the first number as 1 */
a[1] = '\0';
b[0] = '2'; /* initialize the second number as 2 */
b[1] = '\0';

printf("%s, %s", a, b); /* print the first two numbers */

for (i = 0; i < 96; i++) /* loop for the next 96 numbers */
{
add_strings(a, b, c); /* add the two numbers and store the result in c */
tmp = a; /* swap a and b */
a = b;
b = tmp;
tmp = b; /* swap b and c */
b = c;
c = tmp;
printf(", %s", b); /* print the current number */
}
printf("\n");

free(a); /* free the allocated memory */
free(b);
free(c);

return (0);
}

/**
* add_strings - adds two positive numbers in string format
* @a: the first number as a string
* @b: the second number as a string
* @c: the buffer to store the sum as a string
*
* Return: nothing
*/
void add_strings(char *a, char *b, char *c)
{
int i, j, k, carry, sum;

i = 0;
while (a[i] != '\0') /* find the length of a */
i++;
j = 0;
while (b[j] != '\0') /* find the length of b */
j++;
i--; /* set i to the last index of a */
j--; /* set j to the last index of b */
k = 0; /* set k to the first index of c */
carry = 0; /* initialize carry as zero */

while (i >= 0 || j >= 0) /* loop until both i and j are negative */
{
sum = carry; /* add carry to sum */
if (i >= 0) /* if i is valid, add a[i] to sum */
sum += a[i] - '0';
if (j >= 0) /* if j is valid, add b[j] to sum */
sum += b[j] - '0';
c[k] = (sum % 10) + '0'; /* store the last digit of sum in c[k] */
carry = sum / 10; /* update carry as the remaining digits of sum */
i--; /* decrement i */
j--; /* decrement j */
k++; /* increment k */
}
if (carry > 0) /* if carry is still positive, store it in c[k] */
c[k++] = carry + '0';

c[k] = '\0'; /* null-terminate c */

reverse_string(c); /* reverse c to get the correct order of digits */
}

/**
* reverse_string - reverses a string in place
* @s: the string to reverse
*
* Return: nothing
*/
void reverse_string(char *s)
{
int i, j, tmp;

i = 0;
while (s[i] != '\0') /* find the length of s */
i++;

i--; /* set i to the last index of s */

for (j = 0; j < i; j++, i--) /* loop from both ends of s and swap characters */
{
tmp = s[j];
s[j] = s[i];
s[i] = tmp;
}
}

