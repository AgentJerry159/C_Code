#define _CRT_SECURE_NO_WARNINGS 1

//1.д���������Լ������С��������������ֱ�ӵ���
#include<stdio.h>
int ys(int a, int b)//�������
{

    int c, x, y;
    x = a; y = b;
    if (a != b)
    {
        while (x != y)//��������������
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
    printf("���������%d\n", c);
    return c;
}

int bs(int a, int b, int c)//��С������,�����������c
{
    int d;
    d = a * b / c;
    printf("��С��������%d\n", d);
}

int main()
{
    int a;
    int b;
    int c;
    int d;
    printf("������Ҫ�������͹�������������\n");
    printf("�����ֱ�س�\n");
    scanf("%d", &a);
    scanf("%d", &b);
    c = ys(a, b);
    d = bs(a, b, c);
    return 0;