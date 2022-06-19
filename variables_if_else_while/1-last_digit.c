#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - the number stored in the variable
 *is greater than 5
 *is 0
 *is less than 6  
**/
int main(void)
{
	int n;
	int x;
	char s[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;

	if (x > 5)
		printf("%s %d is %d and is greater than 5\n", s, n, x);
	else if (x == 0)
		printf("%s %d is %d and is 0\n", s, n, x);
	else if (x < 6)
		printf("%s %d is %d and is less than 6 and not 0\n", s, n, x);

	return (0);
}
