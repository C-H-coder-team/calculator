#include<stdio.h>
main()
{
	int a;
	float b,c,d;
	printf("%s\n","��ѡ��һ�ּ��㷽����1.�ӷ� 2.���� 3.�˷� 4.����"); 
	scanf("%d",&a);
	printf("%s\n","��������������");
	scanf("%f %f",&b,&c);
	switch(a)
	{
		case 1:d=b+c; printf("%f",d); break;
		case 2:d=b-c; printf("%f",d); break;
		case 3:d=b*c; printf("%f",d); break;
		case 4:d=b/c; printf("%f",d); break;
	}
} 
