#include <stdio.h>
int main()
{
	int p,r,n,m,temp;
	int n=9,m=18; 
	{
		temp=n;
		n=m;
		m=temp; //交换变量 
	}
	p=n*m;
	while(m!=0)
	{
		r=n%m;
		n=m;   //走三次循环，第三次n=1，得出最小公约数 
		m=r;
	 } 
	 printf("公约数：%d  公倍数%d",n,p/n);
	return 0;
 } 

