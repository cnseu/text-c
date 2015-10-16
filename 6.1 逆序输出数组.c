#include <stdio.h> 
int main()
{
 int i,a[10];
 for (i = 0; i <= 9 ; i++)
 {
  /* code */
  a[i]=i;
 }
 for (i = 9; i >= 0 ; i--)
 {
  /* code */
  printf("%d\n",a[i] );
  printf("\n");
 }
 return 0;
}