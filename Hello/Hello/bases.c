#include<stdio.h>
int main(void)
{
	int x = 100;

	printf("%d��ʮ���� %o�ǰ˽��� %x��ʮ������\n", x, x, x);
	printf("%#dʮ����ǰ׺ %#o�˽���ǰ׺ %#xʮ������ǰ׺\n", x, x, x);
	//ʮ���ƺ���û��ǰ׺������������ʾǰ׺���#����
	return 0;
}