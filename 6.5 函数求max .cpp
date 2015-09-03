#include <stdio.h>
int main()
{
	int max(int x,int y,int z);
	int a,b,c,d;
	scanf("%d %d %d",&a,&b,&c);
	d=max(a,b,c);	
	printf("max=%d\n",d);	 
 } 
 int max(int a,int b,int c)
{
	int d;
 	if(a>b&&a>c)
		d=a;
	else if (b>c&&b>a)
		d=b;
	else 
		d=c;
	return(d);
}
