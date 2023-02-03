#include<stdio.h>//预处理指令，告诉编译器实际编译之前要包含stdio.h文件
#include<limits.h>
int main()//主函数
{
	printf("int 储存大小 ：%lu \n", sizeof(int));

	return 0;//终止
}