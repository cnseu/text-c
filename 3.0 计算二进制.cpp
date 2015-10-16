#include <stdio.h>

int pow2(int );
void show_binary(int x,int limit);
int main()
{
	 int n;
	 int i;
	 int limit;
	 printf("Please enter the number of bits:");
	 scanf("%d",&n);
	 
	 limit = pow2(n);
	 printf("%d\n",limit);
	 
	 for(i=0;i<limit;i++){        //´Ó0±éÀúµ½15
	 show_binary(i,limit);
	 printf(": %d\n",i);
 	}
 	return 0;
 }
 int pow2(int n)
 {
	  int ans = 1;
	  while(n>0){
	  ans = ans * 2;
	  n--;
	  }
	  return ans;
 }
 
void show_binary(int x,int limit)
{
	  limit = limit / 2;    //16/2=8
	  while(limit>0){
	  printf("%d",x/limit);
	  x = x % limit;
	  limit = limit / 2;      //8,4,2,1
 }
}
