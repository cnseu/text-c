#include <stdio.h>
#include <ctype.h>   //(isalpha(ch)
int main()
{
	int ch;
	printf("Enter a letter or type # to quit:");
	while ( ( ch= getchar())!='#'){
	if(ch=='\n')   //������ڻ��У�����while�����¶��� 
	continue;
	
	if(isalpha(ch)){    //�ж��Ƿ�Ϊ��ĸ 
		switch (ch){
			case 'a':
			case 'A':
				printf("Hello\n");
				break;
			case 'b':
			case 'B':
				printf("Hi\n");
				break;
			case 'c':
			case 'C':
				printf("Bye\n");
				break;
			default:
				printf("???\n");
		}
	}
		  while(getchar() != '\n')
   		  continue;
   		  printf("Enter another letter or #:");
	}

	   return 0;
 } 
