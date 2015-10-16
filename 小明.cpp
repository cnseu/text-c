#include <stdio.h>
int recur(int n)
{
	int i,a,b,ans;
	a=0;
	b=1;
	ans=0;
	for ( i=0;i<n;i++)
	{
		ans = a+b;
		a=b;
		b=ans;
	}
	return ans;
 } 
 int main()
 {
 	printf("%d",recur(11));
 	return 0;
 }
