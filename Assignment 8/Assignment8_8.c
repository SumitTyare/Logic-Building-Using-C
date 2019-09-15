/* 8. Write a program which accept 5 numbers from user and return largest number from them. */

#include<stdio.h>
#include<malloc.h>

int LargestNum(int *, int);

int LargestNum(int *iArr, int iNo)
{
  int iCnt = 0, iMax = 0;

  for(iCnt = 0, iMax = iArr[0]; iCnt < iNo; iCnt++)
    {
      if(iArr[iCnt] > iMax)
	{
	  iMax = iArr[iCnt];
	}
    }
  
  return iMax;
}

int main(int argc, char* argv[])
{
  int iNo = 0, iCnt = 0, iMax = 0;
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

  iMax = LargestNum(iArr, iNo);

  printf("\nLARGEST NUMBER FROM ARRAY IS : %d\n", iMax);
  
  return 0;
}
