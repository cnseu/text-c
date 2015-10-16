#include <stdio.h>
void show_int_array(int a[],int n);  //不用传回，直接显示
void show_int_2d_array(int a[][2], int k);
int main()
{
    int z[4][2]={ {1,2},{3,4},{5,6},{7,8}};
    int j;
    show_int_2d_array(z,4);
    return 0;
}
void show_int_2d_array(int (*a)[2], int k)  //k =多少列 ，a[][2]每列多少元素
{
    int i,j;
    for (j=0;j<k;j++){
        for(i=0;i<2;i++){
            printf("%d ",a[j][i]);    //注意这个空格
        }
        printf("\n");
    }
    printf("\n");
}
void show_int_array(int *a,int n)
{
    int i;
    for (i=0;i<n;i++){
        printf("%d",*(a+i));   //每次位移
    }
    printf(" \n");
}
