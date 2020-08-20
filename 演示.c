#include<stdio.h>
int main()
{
	printf("请输入物品 价格： ");
	int price;//定义变量
	scanf_s("%d", &price);//输入物品价格

	
	int shouru;
	printf("顾客支付：  ");
	scanf_s("%d", &shouru);//输入顾客支付的钱数

	int change;
	change = shouru - price;//找回的钱数
	printf("应该找回：%dRMB", change);//输出应该找回的钱数

	return 0;
}