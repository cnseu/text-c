#include <stdio.h>
int main()
{
	int i,j,row=0,colum=0,max;
	int a[3][4]={{1,3,4,9},{4,5,7,1},{2,4,5,1}};
	max=a[0][0];
	for(i=0;i<=2;i++){
		for(j=0;j<=3;j++){
		if(a[i][j]>max){
			max=a[i][j];
			row=i;
			colum=j;
			
			}
		}
		//printf("max=%d\nrow=%d\n,colum=%d\n",max,row,colum);
	} 
	printf("max=%d\nrow=%d\n-colum=%d\n",max,row,colum);
	return 0;
}
