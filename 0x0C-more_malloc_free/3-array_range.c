#include "main.h"
#include <stdlib.h>

/**
* array_range - creates an array of integers
* @min: first integer in the array
* @max: last integer in the array
*
* Return: pointer to the newly created array
*/
int *array_range(int min, int max)
{
int *array;
int i;

if (min > max)
return (NULL);

array = malloc(sizeof(int) * (max - min + 1));
if (array == NULL)
return (NULL);

for (i = 0; min <= max; i++, min++)
array[i] = min;

return (array);
}
