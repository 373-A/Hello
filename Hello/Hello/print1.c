//print1.c_演示printf（）的一些特性
#include<stdio.h>
int main(void)
{
	int ten = 10;
	int two = 2;

	printf("Doing it right:");
	printf("%d minus %d is %d\n", ten, 2, ten - two);
	printf("Doing it wrong:");
	printf("%d minus %d is %d\n", ten);//漏了两个参数
	
	return 0;
}