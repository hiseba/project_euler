//	Largest palindrome product
//	Find the largest palindrome made from the product of two 3-digit numbers.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPalindrome(long int number, int digit){
	// It only accepts digit*2 sizes, not safe at all
	char *arr;
	int i;
	if ( number >= (long int)pow(10,-1 + digit*2)){
		arr = malloc(1+digit*2);
	} else {
		arr = malloc(digit*2);
	}
	snprintf(arr, 1+digit*2, "%ld", number);

	for (i = 0; i<digit*2; i++){
		if (arr[i]!=arr[-1 + digit*2 - i])
			return 0;
	}
	return 1;
}
int main(int argc,const char *argv[]){
	// pass digit to get the largest palindrome
	char *end;
	int i, j;
	int digit = strtol(argv[1],&end,10);
	long int current;
	long int largest = 2;
	long int top_limit = (long int)pow(10,digit);
	long int low_limit = (long int)pow(10,digit-1);

	if ( (argc == 2) && (digit>1) ){
		for (i = top_limit-1; i>low_limit; --i){
			for (j = i; j>low_limit; --j){
				current = i*j;
				if (isPalindrome(current,digit))
					if (current>largest){
						largest = current;
					}
			}
		}

	} else {
        exit(EXIT_FAILURE);
    }
	
	printf("Largest palindrome is: %ld\n",largest);
	return 0;
}
