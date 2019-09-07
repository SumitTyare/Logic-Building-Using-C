/* 8. Accept range from user and print all even numbers between that range.
Input : 10 17
Output : 10 12 14 16  */

#include<stdio.h>

void DisplayEvenRange(int, int);

int main(int argc, char* argv[])
{
	int iNum1 = 0, iNum2 = 0;
		
	printf("Enter Number 1=> ");
	scanf("%d", &iNum1);	
	printf("Enter Number 2=> ");
	scanf("%d", &iNum2);
	
	DisplayEvenRange(iNum1, iNum2);
	
	return 0;
}

void DisplayEvenRange(int iNo1, int iNo2)
{
	int iCnt = 0;
	
	for(iCnt = iNo1; iCnt <= iNo2; iCnt += 1)
	{
		if((iCnt % 2) == 0)
		{
			printf("%d  ", iCnt);
		}	
	}
	
	printf("\n");
}
