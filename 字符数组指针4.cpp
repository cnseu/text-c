
#include <stdio.h>
void permute (char a[],int n);
void swap(char *x,char *y);
int main()
{
    char a[]="abcd";
    permute(a,4);
    return 0;
}

void permute( char a[],int n)
{
	int i;
    if ( n==1)  {
        printf("%s\n",a);    
    }
    else
    {
        for (i=n-1;i>=0;i--){
            swap(&a[i],&a[n-1]);      //交换函数,n-1就是最后一个元素
            permute(a,n-1);     
            swap(&a[i],&a[n-1]); 
        }
    }           
}

void swap(char*x,char * y)
{
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}
