#include<stdio.h>
int main()
{
	printf("��������Ʒ �۸� ");
	int price;//�������
	scanf_s("%d", &price);//������Ʒ�۸�

	
	int shouru;
	printf("�˿�֧����  ");
	scanf_s("%d", &shouru);//����˿�֧����Ǯ��

	int change;
	change = shouru - price;//�һص�Ǯ��
	printf("Ӧ���һأ�%dRMB", change);//���Ӧ���һص�Ǯ��

	return 0;
}