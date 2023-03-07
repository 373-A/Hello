#include<stdio.h>
int main(void)
{
	/*
	char broiled;
	char gread = 'E';
	char gread1 = 65;
	char gread2 = 'FATE';//四个独立的8位ASCII码存于32位存储单元中，把这样的字符常量赋给char类型 变量gread2只有后8位有效，因此gread2的值是'E'。
	broiled = 'T';
	char beep = 7;
	char nerf = '\n';
	int a = 10;
	//printf("%d%c%d\n",beep,nerf,beep);
	//printf("%d\n%d\n%d\n%d", broiled,gread,gread1,gread2);
	*/
	char escape  = '\a';//警报（ANSI C）
	char escape1 = '\b';//退格
	char escape2 = '\f';//换页
	char escape3 = '\n';//换行
	char escape4 = '\r';//回车
	char escape5 = '\t';//水平制表符
	char escape6 = '\v';//垂直制表符
	char escape7 = '\\';//反斜杠\,单引号',双引号",问号?
	char escape8 = '\077';//八进制值0后两位为有效八进制数，每位表示0~7中一个数
	char escape9 = '\xff';//x后两位是有效十六位进制数，每个表示0~f中 的一个数
	
	printf("%c\n%c\n%c", escape8,escape9,escape7);
	return 0;
}