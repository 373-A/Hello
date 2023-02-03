#include<stdio.h>
void br(void);
void ic(void);
int main(void)
{
	br();
	printf("Russia,India,China\n");
	ic();
	printf("China\n");
	br();
	printf("Russia\n");

	return 0;
}
void br(void)
{
	printf("Brazil,");
}
void ic(void)
{
	printf("India,");
}