#include <stdio.h>
int main()
{
    int a[10];
    printf("%p %p\n",a,&a[0]);  //可以透过阵列名称，来取得阵列开头的位置，或者指定编号0的记忆体位置
    return 0;
}
