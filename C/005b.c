//  Smallest multiple
//  What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20
//  Second version

#include <stdio.h>
#define N 20

int GCD(int a, int b){
  int c;
  while(a!=0){
    c = a;
    a = b%a;
    b = c;
  };
  return b;
}

int LCM(int a, int b){
  return a/GCD(a,b)*b;
}

int main(int argc,char **argv){
  int number = 1;
  int i;
  
  for (i=2;i<N;i++)
    {
      number = LCM(number,i);
    }
  printf("The number is: %d\n",number);
  return 0;
}

