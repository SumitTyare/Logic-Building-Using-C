/* 4. Accept three numbers from user and return its average. */

#include<stdio.h>

float CalculateAvg(int, int, int);

int main(int argc, char* argv[])
{
	int iNum1 = 0, iNum2 = 0, iNum3 = 0;
	float fAns = 0.0;
	
	printf("Enter Number 1=> ");
	scanf("%d", &iNum1);
	printf("Enter Number 2=> ");
	scanf("%d", &iNum2);
	printf("Enter Number 3=> ");
	scanf("%d", &iNum3);
	
	fAns = CalculateAvg(iNum1, iNum2, iNum3);
	
	printf("\nAverage of %d , %d & %d is %f\n", iNum1, iNum2, iNum3, fAns);
	
	return 0;
}

float CalculateAvg(int iNo1, int iNo2, int iNo3)
{
	float fAvg = 0.0;
	
	fAvg = (float)(iNo1 + iNo2 + iNo3) / 3;
	
	return fAvg;
}
