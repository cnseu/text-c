#include <stdio.h>
int main()
{
 int ch;
 while ( ( ch= getchar())!='#'){
  printf("%c\n",ch);
 while(getchar() != '\n')
  continue;
 }
 return 0;
} 
