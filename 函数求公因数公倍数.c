#define _CRT_SECURE_NO_WARNINGS 1

//1.写函数求最大公约数和最小公倍数，主函数直接调用
#include<stdio.h>
int ys(int a, int b)//最大公因数
{

    int c, x, y;
    x = a; y = b;
    if (a != b)
    {
        while (x != y)//相减法求最大公因数
        {
            if (x > y)
            {
                x = x - y;
            }
            else if (x < y)
            {
                y = y - x;
            }

        }
        c = x;
    }
    if (a == b)
    {
        c = a;
    }
    printf("最大公因数是%d\n", c);
    return c;
}

int bs(int a, int b, int c)//最小公倍数,传入最大公因数c
{
    int d;
    d = a * b / c;
    printf("最小公倍数是%d\n", d);
}

int main()
{
    int a;
    int b;
    int c;
    int d;
    printf("请输入要求公因数和公倍数的两个数\n");
    printf("输完后分别回车\n");
    scanf("%d", &a);
    scanf("%d", &b);
    c = ys(a, b);
    d = bs(a, b, c);
    return 0;