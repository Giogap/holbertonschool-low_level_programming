#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - the number stored in the variable
 *is greater than 5: the string and is greater than 5
 *is 0: the string and is 0
 *is less than 6 and not 0: the string and is less than 6 and not 0  
 * */
int main(void)
{
	int n;
	char s[] = "Last digit of";
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	x = n % 10;
	printf("%s %d is %d and is ", s, n, x);	
	if (x > 5)
		printf("%s %d is %d and is greater than 5\n" s);
	else if (x == 0)
		printf("%s %d is %d and is 0\n", s, n, x);
	else
		printf("%s %d is %d and is less than 6 and not 0\n", s, n, x);
	return (0);
}
