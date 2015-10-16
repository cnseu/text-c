#include <stdio.h>
#include <ctype.h> 
int main()
{
    int x;
    char ch;
    x=0;
    while((ch=getchar()) !='\n'){
    	if(!isdigit(ch))break;
    	printf("%d",ch);
    	printf("%d, ",ch-'0');
	}
    return 0;
}

