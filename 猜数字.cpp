#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
int main()
{
	srand(time(0));
	int number = rand()%100+1;
	int count = 0;
	int a = 0;
	printf("俺已经想好了一个1-100之间的数，");
	do{
		printf("请继续猜：");
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
	while(a!=number);  //不等于循环继续 
	//printf("cool,you use %d times guess the number\n",count);

	return 0;	
} 

/*第一次猜50
第二次猜25或75
第三次猜12，37，62，87
依次下去，根据对方的提示以及你的猜数（取中间）进行下一次猜
每一次缩小一半的范围。对于100只需要最多7次就可以缩小到一个数字上面了，即猜中*/
