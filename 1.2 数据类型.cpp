#include <stdio.h>
#define Akang 1499.99
int main()
{
	printf("~%f~\n",Akang);//����λ 
	printf("~%e~\n",Akang);//��ѧ������ 
    printf("~%4.2f~\n",Akang);//������ʾ4����Դ��ȣ�������λ 
	printf("~%3.1f~\n",Akang);//������ʾ3����Դ��ȣ����������� 
	printf("~10.3f~\n",Akang);//���ҿ��룬������ʾ10����Դ��ȣ���������հ� 
	printf("~%-10.3f~\n",Akang);//������ 
	printf("~%12.3e~\n",Akang);//���������룬 
	printf("~%+4.2f~\n",Akang);//+��ʾ���������Akang-1500��+���Զ���- 
	printf("~%010.2f~",Akang);//λ��������ǰ�油0 
	return 0;
}
