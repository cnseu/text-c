#include <stdio.h>
int main()
{
	int i,j,n=0;
	for (i=1;i<=4;i++)
		for (j=1;j<=5;j++,n++)  //n����ͳ��������ݵĸ��� 
			{
				if (n%5==0)
				printf("\n"); //ÿ�����λ��� 
				if(i==3&&j==1)
				continue;          //������ѭ���ĵ�һ�����������ֱ�ӽ����´�ѭ�� 
				printf("%d\t",i*j);
			 } 
		printf("\n");
	return 0;
 } 
