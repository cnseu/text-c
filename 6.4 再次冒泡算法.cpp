#include <stdio.h>
int main()
{
	int a[10];
	int i,j,t;
	printf("please input 10 numbers:\n");
	for(i=0;i<5;i++)
	  scanf("%d",&a[i]); //对数组进行初始化 
		 printf("\n");

	for( j=0;j<5;j++)
		for( i=0;i<5-j;i++)  //i=0  i=1
			if (a[i]>a[i+1])
	   		{
			    /* code */
			    t=a[i];a[i]=a[i+1];a[i+1]=t;
	   		}

	        printf("the sorted\n");
	
	for (i=0;i<5;i++)
	
	  printf("%d ",a[i] );
	  printf("\n");
	
	 return 0;
}
