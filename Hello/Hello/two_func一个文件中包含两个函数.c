//һ���ļ��а�����������
#include<stdio.h>
void butler(void);//ANSI/ISO C����ԭ��(��������)
int main(void)
{
	printf("I will summon the butler function.\n");
	butler();//��main���Ǻ�������
	printf("Yes,Bring me some tea and writeable DVDs.\n");

	return 0;
}
void butler(void)//��������
{
	printf("You rang,sir?\n");
}