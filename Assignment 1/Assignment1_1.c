/* 1.Program to divide two numbers 
Input : 10 5
Output : 2
*/

#include<stdio.h>

float DivideNum(int, int);

int main(int argc, char* argv[])
{
	int iNum1 = 0, iNum2 = 0;
	float fAns = 0.0;
	
	printf("Enter Number 1 => ");
	scanf("%d", &iNum1);
	printf("Enter Number 2 => ");
	scanf("%d", &iNum2);
	
	fAns = DivideNum(iNum1, iNum2);
	
	printf("Division of %d devided by %d is %f \n", iNum1, iNum2, fAns);
	
	return 0;
}

float DivideNum(int iNo1, int iNo2)
{
	float fAns = 0.0;
	
	fAns = (float)iNo1 / iNo2;
	
	return fAns;
}
