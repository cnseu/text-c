#include <stdio.h>
int main()
{
	int a,b,c,max;
	a=19,b=15,c=1;
	max=a; 
	if(a<b)
	{
		max=b;
	}
	if(max<c)
	{
		max=c;
	}
	printf("%d",max);
 	return 0;
 } 
 
