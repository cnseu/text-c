 
#include <stdio.h>
int main()
{	
	int a[50];
	int i,j; 
	int * ptr[10];  //����һЩ������λ�� 
	for (i=0;i<50;i++) a[i] = i;
	for (i=0;i<10;i++) ptr[i] = & a[5*i];   //��ͼ 
	for (i=0;i<10;i++){
		printf("ptr[%d]=%p: ",i,ptr[i]);
		for(j=0;j<5;j++){
			printf("%3d ",ptr[i][j]);
		}
		printf("\n");
	}	 
	return 0; 
}
