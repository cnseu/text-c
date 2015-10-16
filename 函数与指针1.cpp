#include <stdio.h>
int bsearch(int a[], int left,int right,int key);
int main()
{
    int a[]={1,1,2,3,5,8,12,21,34,55};  //可以用中间的数做比较，可以缩小范围，例如先找一半5，然后2，2分法
    int key;
    int index;
    scanf("%d",&key);
    index= bsearch(a,0,sizeof(a)/sizeof(int) - 1,key);  //10个元素，最后一个元素应该是10-1=9
    if ( index<0)
        printf("Not found.\n");
    else 
        printf("[%d]:%d\n",index,a[index]);
    return 0;

}
int bsearch(int a[], int left,int right,int key)
{
    int mid; // 中间数，与key做比较
    if (left >right)
        return -1;     //小于0的时候表示没找到
    mid = left + ( right-left)/2;
    if (a[mid] ==key){
        return mid;    
    }else if (key < a[mid]){
        //小于找左边
        return bsearch(a,left,mid-1,key);
    }else {
        return bsearch(a,mid+1,right,key); //大于找右边
    }
}
