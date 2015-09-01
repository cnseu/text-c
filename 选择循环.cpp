#include <stdio.h>
int main()
{
int a =0,b=0;
if (a++&&b++){
    printf("AAA");
}
else{
    printf("BBB");
}
printf("a=%d,b=%d",a,b);

return 0;
}
