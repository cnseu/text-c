#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
void read_equation(void);
void read_mapping(void);
void show_ans(void);
char Num_Str1[10];
char Num_Str2[10];
char Num_Str3[10];
int Mapping[10];
 
int main(void)
{
    read_equation();
    read_mapping();
    show_ans();
    return 0;
 
}
 
void read_equation(void)
{
int i=0,j=0,k=0;
int ch,ch1,ch2;
 
   while((ch=getchar())!='+'){
     Num_Str1[i]=ch;
     i++;
     }
 
   while((ch1=getchar())!='='){
     Num_Str2[j]=ch1;
     j++;
     }
 
   while((ch2=getchar())!='\n'){
     Num_Str3[k]=ch2;
     k++;
     }
 
}
 
void read_mapping(void)
{
    char ch,ch1;
    int i;
 
    for (i=0;i<10;i++){
        Mapping[i]=-1;
    }
    while ((ch=getchar())!='#'){
           if(isupper(ch)){
            ch1=ch;}
           else if (isdigit(ch)){
            int x;
            x=ch1-'A';
            Mapping[x]=ch-'0';}
           else
            continue;
           }
 
}
 
void show_ans (void)
 
{
    int i;
printf("%s %s %s\n", Num_Str1, Num_Str2, Num_Str3);
for(i=0;i<10;i++){
        printf("%3d",Mapping[i]);

        }
         printf("\n");
}

