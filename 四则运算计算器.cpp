#include<iostream>
using namespace std;
int main()
{
	int a;
	float b,c,d; 
	cout<<"��ѡ��һ�ּ��㷽����1.�ӷ�  2.����  3.�˷�  4.����"<<endl;
	cin>>a;
	cout<<"��������������"<<endl;
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

