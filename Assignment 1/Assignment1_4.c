/* 4. Accept one number and check whether is is divisible by 5 or not. */

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkNum(int);

int main(int argc, char* argv[])
{
	int iNum = 0;
	BOOL bAns = FALSE;
	
	printf("Enter Number => ");
	scanf("%d", &iNum);
	
	bAns = ChkNum(iNum);
	
	if(bAns == TRUE)
	{
		printf("Number %d is Divisible by 5\n", iNum);
	}
	else
	{
		printf("Number %d is NOT Divisible by 5\n", iNum);
	}
	
	return 0;
}

BOOL ChkNum(int iNum)
{
	BOOL bFlag = 0;
	
	if((iNum % 5) == 0)
	{
		bFlag = 1;
	}
	
	return bFlag;
}
