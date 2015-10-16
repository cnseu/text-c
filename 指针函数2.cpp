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

ptc记住开头位置
*(ptc+k)
cdata[k]   取出位置用&  &cdata[k]相当于(ptc+k) 

*(pti+k)
idata[k] 
