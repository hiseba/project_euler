//  Highly Divisible Triangle
//  What is the value of the first triangle number to have over five hundred numbers

#include <stdio.h>

#define N 500

int main(){
    int n_divisors;
    int divisor;
    int triangle=1;
    int n=2;

    do{
        triangle+=n;
        n_divisors=2;   //1 and itself
        divisor=2;
        while(divisor<=triangle/2){
            if(triangle%divisor==0) n_divisors++;
            divisor++;
        }
        n++;
    }while(n_divisors <= N);
    printf("Result is: %d\n with %d",triangle,n_divisors);
    return 0;
}
