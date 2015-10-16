						#include <stdio.h>

								long fact(int n, long ans)

								{

								    if (n<=1)

								        return ans;

								    else

								        return fact(n-1,ans+n*(n-1));

								}

								 

								int main(void)

								{

								    int n;

								    printf("Ó‹Ëã1*2+2*3+3*4+...+(n-1)*n\n");

								    printf("ÕˆÝ”Èën£º");

								    scanf("%d",&n);

								     

								    printf("´ð°¸ÊÇ£º%d", fact(n,0));

								     

								    return 0;

								}
