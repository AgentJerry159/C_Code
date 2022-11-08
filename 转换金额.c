#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>


char dw(int k)//转换数值单位，谐音单位
{

	k++;
	switch (k)
	{
	case 1: printf("元"); break;
	case 2: printf("拾"); break;
	case 3: printf("佰"); break;
	case 4: printf("仟"); break;
	case 5: printf("万"); break;
	case 6: printf("拾"); break;
	case 7: printf("佰"); break;
	case 8: printf("仟"); break;
	case 9: printf("亿"); break;
	default:; break;
	}
}

char zhm(int a)// a=1
{
	int b, c, d, e;
	b = a;//输入的数的操作变量   给到b=1  c=1
	c = a;//给输入数字的备份
	d = 10;
	int k = -1;

	while (b > 0)
	{
		b = b / 10;//b=0  k=0     

		k++;//得到数字的总共位数
	}
	if (k == 0)
	{
		printf("%d", c);
		dw(k);

	}
	while (k > 0)//拿到最高一位的数字，再用dw函数得到一百的“百”

	{

		d = pow(10, k);// d=100
		c = c / d;  //c=1
		switch (c)
		{
		case 1: printf("壹"); break;
		case 2: printf("贰"); break;
		case 3: printf("叁"); break;
		case 4: printf("肆"); break;
		case 5: printf("伍"); break;
		case 6: printf("陆"); break;
		case 7: printf("柒"); break;
		case 8: printf("捌"); break;
		case 9: printf("玖"); break;
		default:; break;
		}
		dw(k);//得到最高位的单位
		e = c * d;//最高位数字的整数部分
		c = a - e;//拿到最高位的后面的数字
		a = c;
		k--;//退一位
		if (c < 10)
		{
			switch (c)
			{
			case 1: printf("壹"); break;
			case 2: printf("贰"); break;
			case 3: printf("叁"); break;
			case 4: printf("肆"); break;
			case 5: printf("伍"); break;
			case 6: printf("陆"); break;
			case 7: printf("柒"); break;
			case 8: printf("捌"); break;
			case 9: printf("玖"); break;
			default:; break;
			}
			dw(k);
		}
	}
}


int main()
{
	int n;
	printf("请输入要转换金额的数字:");
	scanf("%d", &n);
	zhm(n);//zhm谐音转换米
	return 0;
}



////求出位数
//int lenth(int a)//求数字位数
//{
//	int n = 0;
//	
//	while (a > 0)
//	{
//		a = a / 10;
//		n++;
//	}
//	return n;
//
//}
//int main()
//{
//	int a,b,c,d;
//	printf("请输入数字\n");
//	scanf("%d", &a);
//
//	
//	b=lenth(a);//数字位数赋给b
//	printf("输入数字的位数是：%d\n", b);
//
//	d = a / 10;//拿到十位数字
//	switch (d)//输出个位数字
//	{
//	case 1: printf("壹"); break;
//	case 2: printf("贰"); break;
//	case 3: printf("叁"); break;
//	case 4: printf("肆"); break;
//	case 5: printf("伍"); break;
//	case 6: printf("陆"); break;
//	case 7: printf("柒"); break;
//	case 8: printf("捌"); break;
//	case 9: printf("玖"); break;
//	default:; break;
//	}
//	c = a % 10;//拿到个位数字
//	switch (c)//输出个位数字
//	{
//		printf("个位数是");
//		case 1: printf("壹"); break;
//		case 2: printf("贰"); break;
//		case 3: printf("叁"); break;
//		case 4: printf("肆"); break;
//		case 5: printf("伍"); break;
//		case 6: printf("陆"); break;
//		case 7: printf("柒"); break;
//		case 8: printf("捌"); break;
//		case 9: printf("玖"); break;
//		default:; break;
//	}
//	return 0;
//}
//
//
////1 个位数
////2 十几 几十
////3几百123
////4 几千1231
////5 w 12345
////
////6 
////7
////8
////9 亿
