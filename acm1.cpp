#include <stdio.h>
int main()
{

    int a,b;
    while(EOF != scanf("%d %d",&a,&b))
	{    
    printf("%d\n",a+b);
    }
    return 0;
}
/*

End of file���꣬�����ļ�ĩβ��ֵ��-1������-1��ʾ����������������scanf ���� EOF, 
˵���Ѿ������ļ�(������ stdin ��)ĩβ��, û��������!
scanf�������ص�����������ݵĸ���,ʲô�����������-1

while(scanf("%d%d",&a,&b)!=EOF) �ȼ��� 
*/
