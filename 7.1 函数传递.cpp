#include <stdio.h>
int main()
{
	int max(int x,int y);
	int a,b,c;
	printf("please int two number");
    a=5,b=6;
	c=max(a,b);
	printf("%d",c);
		
}

int max(int x,int y)
{
	int z;
	z=x>y?x:y;
	return(z);
}

