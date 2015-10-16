#include <stdio.h>
#include <ctype.h>
int main()
{
    char str[100];
    int i,x;
    scanf("%s",str);
 
	i=0;
	x=0;
	while(str[i]!='\0'){        //ÊäÈë×ÖÄ¸£¬Êä³öÊı×Ö
	if(!isdigit(str[i])) break;
	x=x*10+str[i]-'0';
	i++;
   }
    printf("x= %d\n",x);
 
 return 0;
}
