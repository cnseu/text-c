#include <stdio.h>
int main()
{
	int i,j;
	int ch;
	
	printf("Please enter an uppercase letter:");
	ch = getchar();
	
	for (i='A';i<=ch;i++){
		
		for ( j='A';j<ch;j++){
			putchar(' ');
		}
		for (j='A';j<=i;j++){
			putchar(j);
		}
		for (j=i-1;j>='A';j--){
			putchar(j);
		}
		
		printf("\n");
	}	
	return 0;
 } 
