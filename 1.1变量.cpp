#include <iostream>
using namespace std;
int main()
{
	int radius; //������� 
	cout<<"Please enter the radius:\n"; 
	cin>>radius; //�ӱ�׼�����豸����һ����������radius
	cout<<"The radius is :"<<radius<<'\n'; //�������radius��ֵ����˵����Ϣ
	cout<<"PI is :"<<3.14<<'\n';
	cout<<"Please enter a different radius!\n"; 
	cin>>radius; //����һ����ͬ��ֵ������radius 
    cout<<"Now the radius is changed to :"<<radius<<'\n';//�������radius����ֵ 
	return 0;
 } 
