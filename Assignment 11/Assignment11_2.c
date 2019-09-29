/* 2. Accept array from user and replace each member with summation of its digit. */

#include<stdio.h>
#include<malloc.h>

void ReplaceElementDigitSum(int[], int);
int DigitSum(int);

int DigitSum(int iNum)
{
  int iTemp = 0, iSum = 0;

  iTemp = iNum;
  while(iTemp != 0)
    {
      iSum = iSum + (iTemp % 10);

      iTemp = (iTemp / 10);
    }
  
  return iSum;
}

void ReplaceElementDigitSum(int iArr[], int iLength)
{
  int iCnt = 0, iDigitSum = 0;
  
  for(iCnt = 0; iCnt < iLength; iCnt++)
    {
      iDigitSum = DigitSum(iArr[iCnt]);
      iArr[iCnt] = iDigitSum;
    }
}

int main(int argc, char* argv[])
{
  int *iArr = NULL, iLength = 0, iCnt = 0;
  
  printf("\nHOW MANY ELEMENTS IN ARRAY : ");
  scanf("%d", &iLength);
  iArr = (int *)malloc(iLength * sizeof(int));

  printf("\nENTER THE ELEMENTS OF ARRAY :\n");

  for(iCnt = 0; iCnt < iLength; iCnt++)
    {
      printf("\nENTER %d ELEMENT : ", iCnt);
      scanf("%d", &iArr[iCnt]);
    }

  ReplaceElementDigitSum(iArr, iLength);

  printf("\nARRAY AFTER REPLACING EACH ELEMENT WITH ITS DIGIT SUM :\n");
  for(iCnt = 0; iCnt < iLength; iCnt++)
    {
      printf("%d\t", iArr[iCnt]);      
    }

  printf("\n");
  
  return 0;
}
