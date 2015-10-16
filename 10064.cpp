#include<stdio.h>
 
int main(void)
{
   int n,a,b,c;
   int i = 10,j;
   int ans[7]={0};
   int x=0;
 
   scanf("%d",&n);
 
      while(i<=n){
 
         a=n/i;
         b=n%i;
 
         if(a>=b && b!=0 && a%b==0){
           ans[x] = a/b;
 
         }
         else if(a<b && a!=0 && b%a==0)
           ans[x]=b/a;
           i=i*10;
           x++;
 
      }
 
    for(x=0;x<8;x++){
        if(ans[x]!=0)
            break;
        }
 
    c = ans[x];
 
    j=x;
    for(j;j<8;j++){
            if(c>ans[j]&&ans[j]>0)
                c=ans[j];
            else
                c=c;
    }
 
    if(c>0&&c!=n)
        printf("%d\n",c);
    else
        printf("0\n");
 
    return 0;
}
