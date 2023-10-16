#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{

srand(time(NULL));
char password[9];

for (int i = 0; i < 8; i++)
{
password[i] = (rand() % 95) + 32;
}
password[8] = '\0';
printf("%s\n", password);
return (0);

}
