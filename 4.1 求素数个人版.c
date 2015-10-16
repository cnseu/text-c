#include <stdio.h>
int main()
{
	int i,j,isprime;
	for (i = 0; i < 100; i++)
	{
		for(j=2;j<i;j++)
		{
			if (i%j==0)
			{
				isprime=0;
				break;
				/* code */
			}
			if (isprime == 1)
			{
				printf("%d\n",i );
				/* code */
			}
		}
		/* code */
	}
}