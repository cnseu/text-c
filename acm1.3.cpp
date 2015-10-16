#include <stdio.h>
int main()
{
	float x,p,m;

	x=0.7526,p=0.01;
	
	int n=int(x/p);
	if(n>=0.5)
	{
		n++;
	}
	m=n*p;
	printf("%.4f",m);
	return 0; 
}
