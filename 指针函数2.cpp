#include <stdio.h>
int main()
{
	char cdata[SIZE]={'A','B','C','D'};
	char *ptc;
	int idata[SIZE]={1,2,3,4};
	int *pti;
	int k;
	
	ptc=cdata;
	pti=idata;

	for(k=0;k<SIZE;K++){
		pirntf("%c %d\n",*(ptc+k),(pti+k));
	}
	return 0;
}

ptc��ס��ͷλ��
*(ptc+k)
cdata[k]   ȡ��λ����&  &cdata[k]�൱��(ptc+k) 

*(pti+k)
idata[k] 
