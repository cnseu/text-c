#include <stdio.h>
int main()
{

    int a,b;
    while(EOF != scanf("%d %d",&a,&b))
	{    
    printf("%d\n",a+b);
    }
    return 0;
}
/*

End of file，宏，代表文件末尾，值是-1，返回-1表示不能输出东西，如果scanf 返回 EOF, 
说明已经读到文件(这里是 stdin 流)末尾了, 没有数据了!
scanf函数返回的是输入的数据的个数,什么都不输入代表-1

while(scanf("%d%d",&a,&b)!=EOF) 等价于 
*/
