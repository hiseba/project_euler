//	Largest Collatz sequence
//	Which starting number, under one million, produces the largest sequence?

#include <stdio.h>

#define N 1000000
int collatz(long int n){
	int iter = 0;
	while(1){
		if(n%2==0) 	{n/=2; iter++;}
	else{
		if(n==1)	return iter;
		else 		{n=3*n+1; iter++;}
	}}
}
int main(){
	long int i;
	int actual;
	int largest=0;
	int sequence=0;
	for (i=2;i<N;i++)
	{
		actual = collatz(i);
		if (actual>largest){
			largest=actual;
			sequence = i;
		}
	}	
	printf("largest: %d\nsequence: %d\n",largest,sequence);	
	return 0;
}
