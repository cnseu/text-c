#include <stdio.h>
int gcd(int,int);
int main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	printf("%d\n",gcd(x,y));
	return 0; 
}
int gcd(int x,int y)
{
	int ans;
	int tmp;
	if(x<y){
		tmp=x;
		x=y;
		y=tmp;
	} 
	if(y==0)
		return x; //���� 
	if(y==1)
		return 1; //�Ҳ����κι����� 
	if(x%2 == 0){   //x is even ż�� 
		if(y%2==0){
			ans = 2 * gcd(x/2,y/2);
		}
		else
			ans =gcd(x/2,y);
	}
	else {   //x is odd���� 
		if (y%2==0)
			ans=gcd(x,y/2);
		else
			ans = gcd((x-y)/2,y);
	} 
	return ans;
}

/*
x k*a
y k*b
k*(a-b)/q k*b
*/
