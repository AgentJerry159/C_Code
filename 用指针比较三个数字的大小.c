#define _CRT_SECURE_NO_WARNINGS 1



#include <stdio.h>

int main()
{
    void comp(int* pa, int* pb,int *pc);//先声明函数
    int a,b,c;//a最小
    int* pa = &a, * pb = &b, * pc = &c;
    
    printf("请输入要比较的数字,用空格隔开\n");
    scanf("%d %d %d",pa,pb,pc);
    comp(pa, pb,pc);//使用函数
    printf("a,b,c从小到大排序如下\na=%d  b=%d  c=%d\n",a, b,c);
    return 0;
}

void comp(int *pa, int *pb,int *pc)//按从小到大输出,a,b,c
{
    if (*pa > *pb)//a,b比较，小的放a
    {
        int temp;
        temp = *pa;
        *pa = *pb;
        *pb = temp;
    }
    if (*pa > *pc)
    {
        int temp;
        temp = *pa;
        *pa = *pc;
        *pc = temp;
    }
    if (*pb > *pc)
    {
        int temp;
        temp = *pb;
        *pb = *pc;
        *pc = temp;
    }
}