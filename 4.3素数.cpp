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
    printf("����Ҫ�������λ����С��8λ����\n");
    scanf("%d",&n1);
    if(n1>=9)
	{
		printf("������Χ\n");
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
