#include<stdlib.h>
#include<time.h>
#include<stdio.h>

/*more headers goes there */

/*betty stye doc for function main goes there */

/**
* main - Entry point
*
* Return: 0
*/

int main(void)
{
int n;
int lastnumber;

srand(time(0));
n = rand() - RAND_MAX / 2;
lastnumber = n % 10;
if (lastnumber > 5)
{
printf("last digit of %d and is greater than 5\n", n, lastnumber);
}
else if (lastnumber == 0)
{
printf("last digit of %d and is 0\n", n, lastnumber);
}
else if (lastnumber 6 && lastnumber != 0)
{
printf("last digit of %d and is lass than 6 and not 0\n", n, lastnumber);
}
return (0);
}
