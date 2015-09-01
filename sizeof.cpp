int main()
{
int a,b,c; 
int max(int a,int b,int c);
scanf("%d%d%d",&a,&b,&c);
d=max(a,b,c);
printf("max=%d\n",d);
return 0;
}

int max(int a,int b,int c)
{
 int t;
 if(a>b)
	t=a;
 else 
  	t=b;
 if(c>t)
  	t=c;
 return (t);
}