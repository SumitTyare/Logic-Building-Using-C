/* 3. Program to print 5 to 1 numbers on screen. */

#include<stdio.h>

void Display(int);

int main(int argc, char* argv[])
{
	int iNo = 5;
	
	Display(iNo);
	
	return 0;
}

void Display(int iNum)
{
	int iTemp = iNum;
	
	while(iTemp != 0)
	{
		printf("%d\t", iTemp);
		iTemp -= 1;
	}
	
	printf("\n");
}
