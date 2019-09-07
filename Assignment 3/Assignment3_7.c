/* 7. Accept range from user and print all numbers between that range.
Input : 10 17
Output : 10 11 12 13 14 15 16 17 */

#include<stdio.h>

void DisplayRange(int, int);

int main(int argc, char* argv[])
{
	int iNum1 = 0, iNum2 = 0;
		
	printf("Enter Number 1=> ");
	scanf("%d", &iNum1);	
	printf("Enter Number 2=> ");
	scanf("%d", &iNum2);
	
	DisplayRange(iNum1, iNum2);
	
	return 0;
}

void DisplayRange(int iNo1, int iNo2)
{
	int iCnt = 0;
	
	for(iCnt = iNo1; iCnt <= iNo2; iCnt += 1)
	{
		printf("%d  ", iCnt);
	}	
	
	printf("\n");
}
