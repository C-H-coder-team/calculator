#include<iostream>
using namespace std;
int main()
{
	int a;
	float b,c,d; 
	cout<<"请选择一种计算方法：1.加法  2.减法  3.乘法  4.除法"<<endl;
	cin>>a;
	cout<<"请输入两个数："<<endl;
	cin>>b>>c; 
	switch(a)
    {
    	case 1:d=b+c; cout<<d;  break;
    	case 2:d=b-c; cout<<d; break;
    	case 3:d=b*c; cout<<d; break;
    	default:d=b/c; cout<<d;
	}
	system("pause");
	return 0;
}

