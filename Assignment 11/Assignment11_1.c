/* 1. Accept array from user and reverse each number of that array. */

#include<stdio.h>
#include<malloc.h>

void ArrayElementReverse(int[], int);
int ElementReverse(int);

int ElementReverse(int iNum)
{
  int iTemp = 0, iElement = 0;

  iTemp = iNum;
  while(iTemp != 0)
    {
      iElement = (iElement * 10) + (iTemp % 10);

      iTemp = (iTemp / 10);
    }
  
  return iElement;
}

void ArrayElementReverse(int iArr[], int iLength)
{
  int iCnt = 0, iRevElement = 0;
  
  for(iCnt = 0; iCnt < iLength; iCnt++)
    {
      iRevElement = ElementReverse(iArr[iCnt]);
      iArr[iCnt] = iRevElement;
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

  ArrayElementReverse(iArr, iLength);

  printf("\nARRAY AFTER REVERSING EACH ELEMENT :\n");
  for(iCnt = 0; iCnt < iLength; iCnt++)
    {
      printf("%d\t", iArr[iCnt]);      
    }

  printf("\n");
  
  return 0;
}
