#include  <stdio.h>
#include <math.h>
//�ж�ĳ��n�Ƿ�Ϊ����ʱ������Ҫ��2һֱ����n��ֻ��Ҫ��2����sqrt��n��,ע��sqrt(n)ҲҪ�ж�
int main()
{
    int i,number;

    for(number; number<=100; number++){  //����1��100
        int isprime=1;
        for ( i=2; i<=sqrt(number); i++){  //�ж��Ƿ�����������number
          if (number%i == 0){
             isprime=0;
             break;
      }
 }
    if (isprime==1)
    {  
 //���2��forѭ������ʱ��if������ûִ�У���ôi��ֵ�϶��� ��sqrt(number)��������������ʽ���ж��Ƿ�Ϊ����
     printf("%d\n",number);
       }
     }
}

