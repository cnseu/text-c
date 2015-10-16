#include <stdio.h>
int main()
{
	int a[2][3]={1,2,3,4,5,6};
	int b[3][2],i,t;
	
	for(i=0;i<2;i++)
	for(t=0;t<3;t++)
	
	b[t][i]=a[i][t];
	for(i=0;i<3;i++)
	{
	for(t=0;t<2;t++)
	
	printf("%d",b[i][t]);
	printf("\n");
	}
	return 0;
}
