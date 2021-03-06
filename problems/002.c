//	Even Fibonacci Numbers
//	Find the Sum of the even-valued terms whose value do not exceed four million

#include <stdio.h>
#include <math.h>

#define N 4000000
int main(){
	//First case 0+1=1
	//Second case 1+1=2
	long int sum = 2;
	long int fib_a=2;
	long int fib_b=1;
	long int fib_aux;
	
	do{
		if (fib_a%2==1)	sum+=fib_a;

		fib_aux = fib_a;
		fib_a += fib_b;
		fib_b = fib_aux;

	}while(fib_a<N);

	printf("Sum is: %ld\n",sum);
	return 0;		
}
