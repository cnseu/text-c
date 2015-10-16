#include <stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=9;i++){
		for(j=1;j<i;j++){
			printf("     "); //5¸ö¿Õ¸ñ 
		}
		for (j=i;j<=9;j++){
			printf("(%d,%d)",i,j);
		}
		printf("\n");
	}
 } 
