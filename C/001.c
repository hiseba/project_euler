//	Multiples of 3 and 5
//	Find the Sum of all the multiples of 3 or 5 below 100

#include <stdio.h>
#define N 100

int main()
{
	int sum=0;
	int i;
	int count_3,count_5=0;
	
	for (i=1;i<N;i++)
	{	
		count_3++;
		count_5++;
		if (count_5==5)
		{
			count_5 = 0;
			if (count_3==3) 
			  count_3 = 0;
			sum += i;
		}
		else
		{
			if (count_3==3)
			{
				count_3 = 0;
				sum += i;
			}
		}
	}
	printf("SUM is: %d\n",sum);
	return 0;
}
