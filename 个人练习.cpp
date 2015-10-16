#include <stdio.h>
int pow2(int n)
 {
 	int ans=1;
 	while(n>0){
 		ans=ans*2;
 		n--;
	 }
	 return ans;
 }
  
int main()
{
	int n;
	int limit;
	scanf("%d",&n);
	limit=pow2(n);
	printf("%d",limit);
	return 0;	
 } 


