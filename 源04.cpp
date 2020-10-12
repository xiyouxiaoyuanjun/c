//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <memory.h>
//#define MAX 6000
//int tot[MAX];
//int now[MAX];
//void add(char* a)
//{
//	int len = strlen(a);
//	memset(now, 0, sizeof(now));
//	int i;
//	for (i = 0; i < len; i++)
//	{
//		now[i] = a[len - i - 1] - '0';
//	}
//	int re = 0;
//	for (i = 0; i < MAX; i++)
//	{
//		int p = tot[i] + now[i] + re;
//		tot[i] = p % 10;
//		re = p / 10;
//	}
//}
//void print()
//{
//	int k;
//	int i;
//	for (k = MAX - 2; k >= 0; k--)
//	{
//		if (tot[k]) break;
//	}
//	for (i = k; i >= 0; i--)
//	{
//		printf("%d", tot[i]);
//	}
//}
//int main(void)
//{
//	char A[MAX];
//	char B[MAX];
//	scanf("%s", A);
//	add(A);
//	scanf("%s", B);
//	add(B);
//	print();
//	return 0;
//}