#include  <stdio.h>
#include <math.h>
int main()
{
    int i,number;
    for(number=2; number<=100; number++)
    {  
        int isprime=1;   //����߶��岻��
          for ( i=2; i<=sqrt(number); i++)
          {  //
              if (number%i == 0)
              {
                isprime=0;
                 break;
              }
          }

    if (isprime==1)
      {  
        printf("%d\n",number);
      }
   }
}
