#include <stdio.h>
void text()
{
	printf("text");
 } 
 
int main()
{
	void text();  //�������� 
	text();     //���ú��� 
	return 0;
}
