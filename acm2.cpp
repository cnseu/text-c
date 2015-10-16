#include <stdio.h>
int main(void)
{
	float x;
    float p;
 
    scanf("%f%f", &x, &p);
 
    if (p==1)
    x = (int)(x+0.5);
 
    if (p==0.1)
    x =(((int)(x*10+0.5))*0.1);
 
    if (p==0.01)
    x =(((int)(x*100+0.5)) *0.01);
 
    if (p==0.001)
    x =(((int)(x*1000+0.5)) *0.001);
 
 
    printf("%.4f", x);
 
    return 0;
}

 

