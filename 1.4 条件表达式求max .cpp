#include <stdio.h>
int main()
{
	int d(int x,int y,int z);
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);

	return 0;	
		 
 } 
 int max(int a,int b,int c)
{
	int d;
 	if(a>b&&a>c)
		max=a;
	else if (b>c&&b>a)
		max=b;
	else 
		max=c;
	return(max);
}
