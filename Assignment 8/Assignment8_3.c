/* 3. Write a program which accept 10 numbers from user and return addition of even numbers from them. */

#include<stdio.h>
#include<malloc.h>

int SumEvenNums(int*, int);

int SumEvenNums(int *iArr, int iNo)
{
  int iSum = 0, iCnt = 0;

  for(iCnt = 0; iCnt < iNo; iCnt++)
    {
      if((iArr[iCnt] % 2) == 0)
	{
	  iSum = iSum + iArr[iCnt];
	}
    }
  
  return iSum;
}


int main(int argc, char* argv[])
{
  int iNo = 0, iCnt = 0, iSum = 0;
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

  iSum = SumEvenNums(iArr, iNo);

  printf("\nSUM OF EVEN NUMBERS FROM ARRAY IS : %d\n", iSum);
  
  return 0;
}
