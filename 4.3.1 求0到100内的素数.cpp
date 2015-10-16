#include  <stdio.h>
//判断某数n是否为素数时，不需要从2一直除到n，只需要从2除到sqrt（n）,注意sqrt(n)也要判断
int main()
{ 
    int number = 2; 
    int i; 
    for(number; number<=100; number++){  //遍历1到100 
 		for ( i=2; i<=sqrt(number); i++){  //判断是否能整除根号number 
      		if (number%i == 0){ 
   			break; 
      } 
 } 
    if (i>sqrt(number))
	   {  
	//如果2号for循环结束时，if语句从来没执行，那么i的值肯定大 于sqrt(number)，所以用这个表达式来判断是否为素数
     printf("%d\n",number); 
 		} 
     } 
}
