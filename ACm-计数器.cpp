#include<stdio.h>
int main(void)
{
    char ch;

    int last=0;
    int counter=0; //计数器 
    int length=0;  //长度 
    int record; 

    while((ch=getchar())!='#'){
    	if(ch!=' '&&ch!='\n'){
    		if(ch>=last){       //判斷字符 
				counter++;  //1 2 3 , 1 2 3 4
        		last = ch;
    		}
    else{
        record = counter;  //record = 3
        counter = 1;
        last =ch;
    }
    
	if (counter>length){
		length = counter;  //length = 3
		   }
        }   
    }
	printf("%d\n",length);
	return 0;
}

