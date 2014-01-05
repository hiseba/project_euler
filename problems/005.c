//	Smallest multiple
//	What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20

#include <stdio.h>
#define N 20

int main(){
	int arr[]={11,12,13,14,15,16,17,18,19,20};
	int found = 0;
	int number = 1;
	int i;
	while (found!=10){
		found = 0;
		number++;
		for (i=0;i<10;i++)
		{
			if(number%arr[i]==0)	found+=1;
		}
		//printf(": %d - %d\n",number,found);
	};
	printf("The number is: %d\n",number);
	return 0;
}
