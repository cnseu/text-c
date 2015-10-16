#include <stdio.h>
#define   MAXBIN 25
#define stars "*******************"
int main()
{
    int hist[MAXBIN];
    int i,nbin;
    for(nbin=0;nbin<MAXBIN;nbin++){
        if(scanf("%d",&hist[nbin])!=1)
            break;
    }
    for(i=0;i<nbin;i++){
    printf("[%d]:%d",i,hist[i]);
    printf("%.*s\n",hist[i],stars);                                //新空行按ctrl+z 然后回车
    
    }
}
