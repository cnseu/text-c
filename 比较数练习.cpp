#include <stdio.h>
int main()
{
	int a,b,c,t;
	a=15,b=8,c=9;
	if(a>b){
		t=a;
	}
	else{
		t=b;
	}
	if(c>t){
		t=c;
	}
	printf("%d",t);
 } 
