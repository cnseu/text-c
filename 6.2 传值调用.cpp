#include <stdio.h>
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	return;
 } 
 

 int main()
 {
 	int a=100; 
	int b=200;
 	swap(&a,&b);
 	printf("%d %d",a,b);
 	return 0;
 }
