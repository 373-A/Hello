#include<stdio.h>
int main(void)
{
	/*
	char broiled;
	char gread = 'E';
	char gread1 = 65;
	char gread2 = 'FATE';//�ĸ�������8λASCII�����32λ�洢��Ԫ�У����������ַ���������char���� ����gread2ֻ�к�8λ��Ч�����gread2��ֵ��'E'��
	broiled = 'T';
	char beep = 7;
	char nerf = '\n';
	int a = 10;
	//printf("%d%c%d\n",beep,nerf,beep);
	//printf("%d\n%d\n%d\n%d", broiled,gread,gread1,gread2);
	*/
	char escape  = '\a';//������ANSI C��
	char escape1 = '\b';//�˸�
	char escape2 = '\f';//��ҳ
	char escape3 = '\n';//����
	char escape4 = '\r';//�س�
	char escape5 = '\t';//ˮƽ�Ʊ��
	char escape6 = '\v';//��ֱ�Ʊ��
	char escape7 = '\\';//��б��\,������',˫����",�ʺ�?
	char escape8 = '\077';//�˽���ֵ0����λΪ��Ч�˽�������ÿλ��ʾ0~7��һ����
	char escape9 = '\xff';//x����λ����Чʮ��λ��������ÿ����ʾ0~f�� ��һ����
	
	printf("%c\n%c\n%c", escape8,escape9,escape7);
	return 0;
}