#include <stdio.h>
int bsearch(int a[], int left,int right,int key);
int main()
{
    int a[]={1,1,2,3,5,8,12,21,34,55};  //�������м�������Ƚϣ�������С��Χ����������һ��5��Ȼ��2��2�ַ�
    int key;
    int index;
    scanf("%d",&key);
    index= bsearch(a,0,sizeof(a)/sizeof(int) - 1,key);  //10��Ԫ�أ����һ��Ԫ��Ӧ����10-1=9
    if ( index<0)
        printf("Not found.\n");
    else 
        printf("[%d]:%d\n",index,a[index]);
    return 0;

}
int bsearch(int a[], int left,int right,int key)
{
    int mid; // �м�������key���Ƚ�
    if (left >right)
        return -1;     //С��0��ʱ���ʾû�ҵ�
    mid = left + ( right-left)/2;
    if (a[mid] ==key){
        return mid;    
    }else if (key < a[mid]){
        //С�������
        return bsearch(a,left,mid-1,key);
    }else {
        return bsearch(a,mid+1,right,key); //�������ұ�
    }
}
