/* 1. Write a program which accept N number from user and increase by 1 if it is divisible by 3 and increase by 2 if it is divisible by 3 and 5. */

#include<stdio.h>
#include<malloc.h>

void IncreaseElement(int [], int);

void IncreaseElement(int iArr[], int iNo)
{
  int iCnt = 0;

  for(iCnt = 0; iCnt < iNo; iCnt++)
    {
      if((iArr[iCnt] % 3) == 0  && ((iArr[iCnt] % 5) == 0))
	{
	  iArr[iCnt] = iArr[iCnt] + 2;
	}
      else if((iArr[iCnt] % 3) == 0)
	{
	  iArr[iCnt] = iArr[iCnt] + 1;
	}
    }
}


int main(int argc, char* argv[])
{
  int *iArr = NULL;
  int iNo = 0, iCnt = 0;
  
  printf("\nHOW MANY ELEMENTS : ");
  scanf("%d", &iNo);

  iArr = (int *)malloc(iNo * sizeof(int));

  printf("\nENTER THE ELEMENTS :\n");

  for(iCnt = 0; iCnt < iNo; iCnt++)
    {
      printf("\nENTER %d ELEMENT : ", iCnt);
      scanf("%d", &iArr[iCnt]);
    }

  IncreaseElement(iArr, iNo);

  printf("\nARRAY AFTER INCREASING ELEMENTS :\n");

  for(iCnt = 0; iCnt < iNo; iCnt++)
    {
      printf("%d\t", iArr[iCnt]);
    }

  printf("\n");
  
  return 0;
}
