#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - show if ever the random number is positive, negative or zero
 *
 * Return; 0 (succes)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() -RAND_MAX / 2;
/* the code goes there */
if (n < 0)
{
	printf("%d is %s\n", n, "negative");
}
else if (n > 0)
{
	printf("%d is %s\n", n, "positive");
}
else
{
	printf("%d is %s\n", n, "zero");
}
return (0);
}
