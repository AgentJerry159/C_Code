#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int a = 5;
	int * pa = &a;
	printf("输入数字改变a值");
	scanf("%d",pa);
	printf("a=%d\n",*pa);
	return 0;
}
