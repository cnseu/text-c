/*
11
11/2  5..1
11=2*5+1
5 =2*2+1
2 =2*1+0
1 =2*0+1
结果1011

11%2 = 1    11/2 = 5
5%2  = 1    5/2 = 2
2%2  = 0    2/2 = 1
1%2  = 1    1/2 = 0 
0  
*/
#include <stdio.h>
void i2b( int );
int main()
{
	int x;
	scanf("%d",&x);
	i2b(x); //传入，并显示二进制 
	return 0;
 } 
 
void i2b(int n) //接收传入的整数值 
{
	if(n==0) return; //跳出 
	i2b(n/2);
	printf("%d",n%2);
}
