//	1000-digit Fibonacci number
//	What is the first term in the Fibonacci sequence to contain 1000 digits?

#include <stdio.h>
#include <math.h>

#define M_PHI 1.61803398874989484820
#define N 1000

int main(){
	double term;
	
	term = log(10)*N + log(5)/2;
	term /= log(M_PHI);
	printf("term: %.0f\n",ceil(term));	
	return 0;
}
