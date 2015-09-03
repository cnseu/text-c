#include <stdio.h>
int main()
{
	int i,j,n=0;
	for (i=1;i<=4;i++)
		for (j=1;j<=5;j++,n++)  //n用来统计输出数据的个数 
			{
				if (n%5==0)
				printf("\n"); //每输出五次换行 
				if(i==3&&j==1)
				continue;          //第三次循环的第一个数不输出，直接进入下次循环 
				printf("%d\t",i*j);
			 } 
		printf("\n");
	return 0;
 } 
