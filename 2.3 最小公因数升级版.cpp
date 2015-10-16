#include <stdio.h>
int main()
{
 unsigned int num,div;
 int isPrime;
 
 printf("Enter an integer(q to quit):");
 while(scanf("%u",&num)==1){
  isPrime = 1;
  for (div=2;div<num;div++){
   if(num%div == 0){
    printf("%u, ",div);
    isPrime = 0;
   }
  }
  if (isPrime == 1){
   printf("%u is a prime number.\n",num);
  }
  else{
   printf("\b\b are divisors of %u.\n",num);
  }
  printf("\n Enter another integer(q to quit):");
 }
 return 0;
 } 
