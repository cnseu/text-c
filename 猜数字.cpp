#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
int main()
{
	srand(time(0));
	int number = rand()%100+1;
	int count = 0;
	int a = 0;
	printf("���Ѿ������һ��1-100֮�������");
	do{
		printf("������£�");
		scanf("%d",&a);
		count++;
	if (a>number){
		printf("Too big");
	}else if (a<number){
		printf("Too small");
	}else if (a=number){
		printf("You use %d times win\n",count);
	}
	if (count>7)
		{
			printf(",Game over");
			break;
		}
	}
	while(a!=number);  //������ѭ������ 
	//printf("cool,you use %d times guess the number\n",count);

	return 0;	
} 

/*��һ�β�50
�ڶ��β�25��75
�����β�12��37��62��87
������ȥ�����ݶԷ�����ʾ�Լ���Ĳ�����ȡ�м䣩������һ�β�
ÿһ����Сһ��ķ�Χ������100ֻ��Ҫ���7�ξͿ�����С��һ�����������ˣ�������*/
