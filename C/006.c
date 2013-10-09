//	Sum Square Difference
//	Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum
#include <stdio.h>

#define N 100

int main(){
	int i;
	int sum=0;
	int square=0;

	for (i=1;i<N+1;i++)
	{
		sum += i*i;
		square += i;
	}
	square *= square;
	printf("Square is: %d\n", square);
	printf("Sum is: %d\n", sum);
	printf("Difference is: %d\n", square-sum);
	return 0;
}
