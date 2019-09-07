/* 3. Write a program which accept two numbers from user and display its largest common factors.
Input : 12 18
Output : 6 */

#include<stdio.h>

int CalculateLargeFact(int, int);

int main(int argc, char* argv[])
{
	int iNum1 = 0, iNum2 = 0, iAns = 0;
	
	printf("Enter Number 1=> ");
	scanf("%d", &iNum1);
	printf("Enter Number 2=> ");
	scanf("%d", &iNum2);
	
	iAns = CalculateLargeFact(iNum1, iNum2);
	
	printf("\nLargest Common Factor of %d & %d is %d\n", iNum1, iNum2, iAns);
	
	return 0;
}

int CalculateLargeFact(int iNo1, int iNo2)
{
	int iMax = 0, iCnt = 0, iNum = 0;
	
	if(iNo1 < iNo2)
	{
		iNum = iNo1;
	}
	else
	{
		iNum = iNo2;
	}
	
	for(iCnt = 2; iCnt <= (iNum / 2); iCnt += 1)
	{
		if(((iNo1 % iCnt) == 0) && ((iNo2 % iCnt) == 0))
		{
			iMax = iCnt;
		}
	}
	
	return iMax;
}
