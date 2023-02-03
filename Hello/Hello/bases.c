#include<stdio.h>
int main(void)
{
	int x = 100;

	printf("%d是十进制 %o是八进制 %x是十六进制\n", x, x, x);
	printf("%#d十进制前缀 %#o八进制前缀 %#x十六进制前缀\n", x, x, x);
	//十进制好像没有前缀？？？？？显示前缀添加#即可
	return 0;
}