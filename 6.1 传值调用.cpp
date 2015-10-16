void swap(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	return;
 } 
#include <stdio.h>
int main()
{
	int a=100,b=200;
	swap(a,b);
	printf("%d %d",a,b);
	return 0;
 } 
