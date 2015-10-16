#include <stdio.h>
void minmax(int a[],int len,int *max,int *min);
int main(void)
{
	int a[]={1,2,3,4,5};
	int min,max;
	printf("main sizeof(a)=%lu\n",sizeof(a));
	minmax(a,sizeof(a)/sizeof(a[0]),&min,&max);
	printf("min=%d,max=%d\n",min,max);
	return 0;
}

void minmax(int a[],int len,int *min,int *max)
{
	int i;
	printf("minmax sizeof(a)=%lu\n",sizeof(a));
	*min = *max =a[0];
	for (i=1; i<len;i++){
		if (a[i]<*min){
			*min = a[i];
		}
		if (a[i]>*max){
			*max =a [i];
		}
	} 
}
