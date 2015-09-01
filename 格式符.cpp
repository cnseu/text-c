#include <stdio.h>
int main()
{
	int hour1,minute1;
	int hour2,minute2;
	int h1,h2,m;
	scanf("%d %d",&hour1,&minute1);
	scanf("%d %d",&hour2,&minute2);
	h1=hour1*60+minute1;
	h2=hour2*60+minute2;
	m=(h1-h2);
	printf("%d %d",m/60,m%60);
	return 0;
	/*h1=hour2-hour1;
	m1=minute2-minute1;
	if(m1<0)
	{
		m1=m1+60;
		h1--;
	}*/
	//printf("%d %d",h1,m1);
 } 
