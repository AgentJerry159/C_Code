#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    //��ָ���󳤶�
    char a[] = "1.1";
    char * pa = a;
    int count = 0;
    while (*pa++ != '\0')
    {
        count++;
    }
    printf("������%d\n", count);
    return 0;
}