#include <stdio.h>
#include <stdlib.h>
int main()
{
    char ch, prev=' ';
    int maxlen=0,count=0;
    while((ch=getchar())!='#')/*讀取字元*/
    {
        if(ch!=' ' && ch!='\n')/*判斷與處理非空格與跳行*/
        {
            if(prev!=' ')/*第1字元若未讀入則存至prev*/
            {
                if( ch>=prev)/*非遞減字元則，計數加1*/
                {
                    count++;                 
                }
                else/*遇遞減字元則重置*/
                {
                    count=1;
                }
 
                if(maxlen<count)/*若最有長字列則存入maxlen*/
                {
                   maxlen=count;
                }
                 prev=ch;
 
            }else
            {
                prev=ch;
                count++;
            }
        }      
    }
    printf("%d\n",maxlen);
 
    return 0;
}
