/* 1.Write a program which accept one number from user and return its factorial.
Input : 5
Output : 120
*/

#include<stdio.h>

int CalculateFact(int);

int main(int argc, char* argv[])
{
	int iNum = 0, iAns = 0;
	
	printf("Enter Number=> ");
	scanf("%d", &iNum);
	
	iAns = CalculateFact(iNum);
	
	printf("\nFactorial of %d is %d\n", iNum, iAns);
	
	return 0;
}

int CalculateFact(int iNo)
{
	int iFact = 1;
	
	while(iNo != 1)
	{
		iFact = iFact * iNo;
		iNo -= 1;
	}
	
	return iFact;
}
