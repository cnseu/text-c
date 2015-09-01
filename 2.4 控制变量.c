#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	int fact =1 ;
	for (int i=1; i<n; i++){
		fact*=1;
	}
	printf("%d!=%d\n",n,fact );
	return 0;
}