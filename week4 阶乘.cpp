#include <stdio.h>
int fact(int);
int fact_r(int);
int main()
{
	int n;
	scanf("%d",&n);	
	printf("%d != %d\n",n,fact(n)); //循环 
	printf("%d != %d\n",n,fact_r(n)); //递归 
	return 0; 
} 

int fact ( int n)
{
	int ans=1;
	while (n>0){
		ans = ans*n;
		n--;
	}
	return ans;
}

int fact_r(int n)
{
	int ans;
	if(n==1){
		ans = 1;
	} else{
	printf("fact_r(%d):%d * fact_r(%d)\n",n,n,n-1);
	ans = n*fact_r(n-1); //n-1 n-2 退到最上层 
	}
	printf("fact_r(%d)=%d\n",n,ans);
	return ans;
}
/*
个人
6*5=30
30*4=120
120*3=360
360*2=720
720*1=720

老师 
6! =6*5!=720
5! =5*4!=120
4! =4*3!=24       ↓ 
3! =3*2!=6
2! =2*1!=2
1! =1           等于1的时候停 
*/	


