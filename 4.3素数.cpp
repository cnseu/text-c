#include<stdio.h>
#include <math.h>
int fun(int n)
{
int i,s=1;
for(i=1;i<=n;i++)
s=s*10;
}

int main()
{
    int n,n1=0;
  	long sum,s,a=0,x[8],y=0;
    printf("输入要输出数的位数（小于8位）：\n");
    scanf("%d",&n1);
    if(n1>=9)
	{
		printf("超出范围\n");
    }
      
    for(sum=fun(n1-1);sum<fun(n1);sum++)
    {   
		s=sum;
        for(n=0;n<=n1;n++)
        {x[n]=s%10;
         s=(s-x[n])/10;
         y=y+x[n]*x[n]*x[n];
        }
    if(y==sum)
	printf("%ld",sum);
    } 
}
