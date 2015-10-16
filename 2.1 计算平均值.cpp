#include <stdio.h>
int main()
{
 int sum=0;
 int count=0;
 int number;
 scanf("%d",&number);
 while(scanf("%d",&number)!= -1){
  sum+=number;
  count++;
 }
 printf("%f",1.0*sum/count);
 return 0;
}
