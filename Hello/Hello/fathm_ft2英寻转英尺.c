#include<stdio.h>//把2英寻转化为英尺
int main(void)
{
	int feet,fathoms;

	fathoms = 2;
	feet = 6 * fathoms;
	
	printf("There are %d foot in %d fathoms!\n",feet,fathoms);
	printf("Yes,I said %d foot!\n",feet);

	return 0;
}