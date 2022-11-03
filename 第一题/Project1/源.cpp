#include<stdio.h>
int main()
{
	int mima1;
	int i;
	int w1, w2, w3, w4;
	int mima2;

	printf("输入一个四位数密码:");
	scanf_s("%d",&mima1);
	w4 = mima1 % 10;
	w3 = mima1 / 10 % 10;
	w2 = mima1 / 10 / 10 % 10;
	w1 = mima1 / 10 / 10 / 10;
	mima2 = w1 * 1000 + w2 * 100 + w3 * 10 + w4;
	mima1 = (mima2 + mima1) / 10;
	mima1 = mima1 % 10 * 1000 + mima1 / 10 / 10 / 10 + mima1 / 10 % 10 * 100 + mima1 / 10 / 10 % 10 * 10;
	printf("输出加密后密码:%d", mima1);

	return 0;
}