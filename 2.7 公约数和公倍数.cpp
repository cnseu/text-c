#include <stdio.h>
int main()
{
	int p,r,n,m,temp;
	int n=9,m=18; 
	{
		temp=n;
		n=m;
		m=temp; //�������� 
	}
	p=n*m;
	while(m!=0)
	{
		r=n%m;
		n=m;   //������ѭ����������n=1���ó���С��Լ�� 
		m=r;
	 } 
	 printf("��Լ����%d  ������%d",n,p/n);
	return 0;
 } 

