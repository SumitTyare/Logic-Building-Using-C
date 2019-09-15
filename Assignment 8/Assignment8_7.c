/* 7. Write a program which accept 5 numbers from user and print addition of digits of each number. */

#include<stdio.h>
#include<malloc.h>

int DigitSum(int);
void DisplayNumsDigitSum(int[], int);

int DigitSum(int iNum)
{
  int iTemp = 0, iSum = 0;

  iTemp = iNum;
  while(iTemp != 0)
    {
      iSum = iSum + (iTemp % 10);
      
      iTemp = iTemp / 10;
    }
  
  return iSum;
}

void DisplayNumsDigitSum(int iArr[], int iNo)
{
  int iCnt = 0, iSum = 0;

  printf("\nDISPLAYING SUM OF DIGITS OF EACH ELEMENT OF ARRAY :\n");
  
  for(iCnt = 0; iCnt < iNo; iCnt++)
    {
      iSum = DigitSum(iArr[iCnt]);

      printf("\nSUM OF DIGITS IN NUMBER %d IS : %d\n", iArr[iCnt], iSum);
    }
}

int main(int argc, char* argv[])
{
  int iNo = 0, iCnt = 0;
  int *iArr = NULL;
  
  printf("\nHOW MANY ELEMENTS : ");
  scanf("%d", &iNo);

  iArr = (int *)malloc(iNo * sizeof(int));

  printf("\nENTER THE ELEMENTS :\n");

  for(iCnt = 0; iCnt < iNo; iCnt++)
    {
      printf("\nENTER ELEMENT %d : ", iCnt);
      scanf("%d", &iArr[iCnt]);
    }

  DisplayNumsDigitSum(iArr, iNo);
  
  return 0;
}
