//	Largest prime factor
//	What is the largest prime factor of the number 600851475143?

#include <stdio.h>
#include <stdlib.h>

int main(int argc,const char *argv[]){
	// pass number to get the prime
	char * end;
	unsigned long num = strtol(argv[1],&end,10);
	unsigned long largest_prime = 2;

	if (argc == 2){
		while(num!=1){
			if (num%largest_prime==0)
				num /= largest_prime;
			else
				largest_prime++;
		}
	} else {
        exit(EXIT_FAILURE);
    }
	
	printf("Largest prime is: %ld\n",largest_prime);
	return 0;
}
