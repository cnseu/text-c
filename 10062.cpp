#include <stdio.h>
#include <stdlib.h>
int main()
{
    char ch, prev=' ';
    int maxlen=0,count=0;
    while((ch=getchar())!='#')/*�xȡ��Ԫ*/
    {
        if(ch!=' ' && ch!='\n')/*�Д��c̎��ǿո��c����*/
        {
            if(prev!=' ')/*��1��Ԫ��δ�x��t����prev*/
            {
                if( ch>=prev)/*���f�p��Ԫ�t��Ӌ����1*/
                {
                    count++;                 
                }
                else/*���f�p��Ԫ�t����*/
                {
                    count=1;
                }
 
                if(maxlen<count)/*�������L���Єt����maxlen*/
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
