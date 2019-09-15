/* 2. Write a program which accept 10 numbers from user and display in reverse order. */

#include<stdio.h>
#include<malloc.h>

void DisplayReverse(int[], int);

void DisplayReverse(int iArr[], int iNo)
{
  int iCnt = 0;
  
  printf("\nDISPLAYING ARRAY IN REVERSE :\n");

  for(iCnt = (iNo - 1); iCnt >= 0; iCnt--)
    {
      printf("%d\t", iArr[iCnt]);
    }

  printf("\n");
  
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

  DisplayReverse(iArr, iNo);
  
  return 0;
}
