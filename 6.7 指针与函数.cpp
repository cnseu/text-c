#include <stdio.h>
void f(int *p);
int main(void)
{
	int i=6;
	printf("%p\n",i);
	f(&i);
	return 0;
 } 
 void f(int *p)
 {
 	printf("p=%p\n",p);
 }
