#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int a = 5;
	int * pa = &a;
	printf("������һ��������");
	scanf("%d",pa);
	printf("a=%d\n",*pa);
	return 0;
}