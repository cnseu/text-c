#include <stdio.h>
#define Akang 1499.99
int main()
{
	printf("~%f~\n",Akang);//后六位 
	printf("~%e~\n",Akang);//科学计数法 
    printf("~%4.2f~\n",Akang);//最少显示4个资源宽度，保留两位 
	printf("~%3.1f~\n",Akang);//最少显示3个资源宽度，会四舍五入 
	printf("~10.3f~\n",Akang);//向右靠齐，最少显示10个资源宽度，不足会留空白 
	printf("~%-10.3f~\n",Akang);//向左靠齐 
	printf("~%12.3e~\n",Akang);//会四舍五入， 
	printf("~%+4.2f~\n",Akang);//+表示正数，如果Akang-1500，+会自动变- 
	printf("~%010.2f~",Akang);//位数不足在前面补0 
	return 0;
}
