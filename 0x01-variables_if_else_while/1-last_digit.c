#include <stdlib.h>

#include <time.h>

/* more headers goes there */



/* betty style doc for function main goes there */

int main(void)

{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
        l = n % 10;
	if (l > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n,l);
	}
	else if (l == 0)
	{
	printf("Last digit of %d is %d and is zero\n", n,l);
	}

	else
	{
	printf("Last digit of %d is %d and is less 6 and not zero\n", n,l);
	}
		return (0);


