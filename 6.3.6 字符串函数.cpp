#include <stdio.h>
int main()
{
	char str1[5];  //不要char*p，然后gets(p)，这是错误的，因为p没有指向有效的内存，它可能指向任何                   //     地方的未知大小的内存块，这样以来，就可能修改了不属于本程序的内存的内容
    gets(str1);
    printf("%s\n", str1);
	/*
	char str[]={"china\nBeijing"};	
	puts(str);
	*/
	return 0;
}
