#include <iostream>
using namespace std;
int main()
{
	int radius; //定义变量 
	cout<<"Please enter the radius:\n"; 
	cin>>radius; //从标准输入设备读入一个整数存入radius
	cout<<"The radius is :"<<radius<<'\n'; //输出变量radius的值，及说明信息
	cout<<"PI is :"<<3.14<<'\n';
	cout<<"Please enter a different radius!\n"; 
	cin>>radius; //输入一个不同数值，存入radius 
    cout<<"Now the radius is changed to :"<<radius<<'\n';//输出变量radius的新值 
	return 0;
 } 
