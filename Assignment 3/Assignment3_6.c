/* 6. Accept number in decimal format and print its binary equivalent number.
Input : 11
Output : 1011 */

#include<stdio.h>

void DisplayBinary(int);

int main(int argc, char* argv[])
{
	int iNum = 0;
		
	printf("Enter Number => ");
	scanf("%d", &iNum);
	
	DisplayBinary(iNum);
	
	return 0;
}

void DisplayBinary(int iNo)
{
	int iNum = 0, iDigit = 0;
	
	iNum = iNo;
	
	while(iNum != 0)
	{
		iDigit = iNum % 2;
		printf("%d", iDigit);
		iNum = iNum / 2;
	}
	
	printf("\n");
}
