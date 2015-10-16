#include <stdio.h>
#define SIZE 4 
int main()
{
     char cdata[SIZE] = {'A','B','C','D'};
     char * ptc;
     int    idata[SIZE]={1,2,3,4};
     int *pti;
     int k;

    ptc=cdata;
    pti=idata;

    for(k=0;k<SIZE;k++){
        printf("ptc+%d: %d %c    pti+%d: %p %d\n",k,ptc+k,*(ptc+k),k,pti+k,*(pti+k));
    } 
    return 0;
} 
