#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	char a[] = "Abcde";
	char * pa = a;
	printf("%s\n", pa);
	printf("*pa=%c\n*(pa+1)=%c\n*(pa+2)=%c", *pa, *(pa + 1), *(pa + 2));

	return 0;
}