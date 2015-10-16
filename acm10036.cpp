#include <stdio.h>
int main()
{
	int n,a,b,c,d;
	scanf("%d",&n);
	a=n/1000; //千位
	b=(n-1000*a)/100; //百位
	c=(n-1000*a-100*b)/10;//十位
	d=(n-1000*a-100*b-10*c);//个位 
	if(a%2==0)
	{
		a/=2;
	}
	if(b%2==0)
	{
		b/=2;
	}
	if(c%2==0)
	{
		c/=2;
	}
	if(d%2==0)
	{
		d/=2;
	}
	printf("%d",a*1000+b*100+c*10+d);
	printf("\n");
	return 0;
} 
