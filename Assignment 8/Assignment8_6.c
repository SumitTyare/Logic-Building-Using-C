/* 6. Write a program which accept 8 numbers from user and print number of digits of each number. */

#include<stdio.h>
#include<malloc.h>

int CountDigit(int);
void DisplayNumsDigit(int[], int);

int CountDigit(int iNum)
{
  int iTemp = 0, iCount = 0;

  iTemp = iNum;
  while(iTemp != 0)
    {
      iTemp = iTemp / 10;

      iCount++;
    }
  
  return iCount;
}

void DisplayNumsDigit(int iArr[], int iNo)
{
  int iCnt = 0, iCount = 0;

  printf("\nDISPLAYING COUNT OF DIGITS IN EACH ELEMENT OF ARRAY :\n");
  
  for(iCnt = 0; iCnt < iNo; iCnt++)
    {
      iCount = CountDigit(iArr[iCnt]);

      printf("\nDIGITS IN NUMBER %d IS : %d\n", iArr[iCnt], iCount);
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

  DisplayNumsDigit(iArr, iNo);
  
  return 0;
}
