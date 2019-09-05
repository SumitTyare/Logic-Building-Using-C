/* 2. Program to print 5 times "Hello" on screen. */

#include<stdio.h>

void Display();

int main(int argc, char* argv[])
{
	Display();
	
	return 0;
}

void Display()
{
	int iCnt = 0;
	
	for(iCnt = 0; iCnt < 5; iCnt++)
	{
		printf("Hello\n");
	}
}
