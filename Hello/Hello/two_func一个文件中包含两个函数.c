//一个文件中包含两个函数
#include<stdio.h>
void butler(void);//ANSI/ISO C函数原型(函数声明)
int main(void)
{
	printf("I will summon the butler function.\n");
	butler();//在main中是函数调用
	printf("Yes,Bring me some tea and writeable DVDs.\n");

	return 0;
}
void butler(void)//函数定义
{
	printf("You rang,sir?\n");
}