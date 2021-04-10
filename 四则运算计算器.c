#include<stdio.h>
main()
{
	int a;
	float b,c,d;
	printf("%s\n","请选择一种计算方法：1.加法 2.减法 3.乘法 4.除法"); 
	scanf("%d",&a);
	printf("%s\n","请输入两个数：");
	scanf("%f %f",&b,&c);
	switch(a)
	{
		case 1:d=b+c; printf("%f",d); break;
		case 2:d=b-c; printf("%f",d); break;
		case 3:d=b*c; printf("%f",d); break;
		case 4:d=b/c; printf("%f",d); break;
	}
} 
