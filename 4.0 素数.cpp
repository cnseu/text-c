#include <stdio.h>
#include <math.h>
int main()
{
  int i,j;
  for(i=2;i<100;i++ ){
  for (j=2;j<=sqrt(100);j++)
  
  if (i%j==0)
  break;
 
  if (i%j!=0)
  printf("%d\n",i);
}
}

