//	1000-digit Fibonacci number
//	What is the first term in the Fibonacci sequence to contain 1000 digits?

#include <stdio.h>
#include <math.h>

#define M_PHI 1.61803398874989484820

//	Pass the number of digits you want
int main(int argc, char **argv){
	double term;
	
	term = log(10)*(atoi(argv[1])-1) + log(5)/2;
	term /= log(M_PHI);
	printf(": %.0f\n",ceil(term));	
	return 0;
}
