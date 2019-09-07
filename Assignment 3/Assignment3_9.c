/* 9. Accept range from user and addition of all numbers between that range.
Input : 10 15
Output : 75 */

#include<stdio.h>

int RangeSum(int, int);

int main(int argc, char* argv[])
{
	int iNum1 = 0, iNum2 = 0, iSum = 0;
		
	printf("Enter Number 1=> ");
	scanf("%d", &iNum1);	
	printf("Enter Number 2=> ");
	scanf("%d", &iNum2);
	
	iSum = RangeSum(iNum1, iNum2);
	
	printf("\nSum of Range %d to %d is %d\n", iNum1, iNum2, iSum);
	
	return 0;
}

int RangeSum(int iNo1, int iNo2)
{
	int iCnt = 0, iSum = 0;
	
	for(iCnt = iNo1; iCnt <= iNo2; iCnt += 1)
	{
		iSum = iSum + iCnt;
	}	
	
	return iSum;
}
