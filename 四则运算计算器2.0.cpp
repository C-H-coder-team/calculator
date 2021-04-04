#include<iostream>
#include<fstream>
#include<algorithm>
   
using namespace std;
char f;
double s1,s2;
int main()
{
cin>>s1>>f>>s2;
if(f=='/' and s2==0)cout<<"NO";
   
if(f=='/' and s2!=0)cout<<s1<<'/'<<s2<<'='<<s1/s2;
   
if(f=='-' )cout<<s1<<'-'<<s2<<'='<<s1-s2;
   
if(f=='*')cout<<s1<<'*'<<s2<<'='<<s1*s2;
   
if(f=='+' )cout<<s1<<'+'<<s2<<'='<<s1+s2;
   
       
   
    return 0;
}
//upload by fanjun
