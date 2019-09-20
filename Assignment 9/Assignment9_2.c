/* 2. Write a program which accept N number from user and replace each even number with 0 and odd number with 1. */

#include<stdio.h>
#include<malloc.h>

void ReplaceElement(int [], int);

void ReplaceElement(int iArr[], int iNo)
{
  int iCnt = 0;

  for(iCnt = 0; iCnt < iNo; iCnt++)
    {
      if((iArr[iCnt] % 2) == 0)
	{
	  iArr[iCnt] = 0;
	}
      else
	{
	  iArr[iCnt] = 1;
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

  ReplaceElement(iArr, iNo);

  printf("\nARRAY AFTER REPLACING ELEMENTS :\n");

  for(iCnt = 0; iCnt < iNo; iCnt++)
    {
      printf("%d\t", iArr[iCnt]);
    }

  printf("\n");
  
  return 0;
}
