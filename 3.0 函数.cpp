#include <stdio.h>
void text()
{
	printf("text");
 } 
 
int main()
{
	void text();  //声明函数 
	text();     //调用函数 
	return 0;
}
