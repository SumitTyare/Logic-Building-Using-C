/* 1.Write a program which accept 10 numbers from user and display only even numbers from them. */

#include<stdio.h>
#include<malloc.h>

void DisplayEven(int[], int);

void DisplayEven(int iArr[], int iNo)
{
  int iCnt = 0;

  printf("\nDISPLAYING EVEN ELEMENTS FROM GIVEN ARRAY :\n");
  
  for(iCnt = 0; iCnt < iNo; iCnt++)
    {
      if((iArr[iCnt] % 2) == 0)
	{
	  printf("%d\t", iArr[iCnt]);
	}
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

  DisplayEven(iArr, iNo);
  
  return 0;
}
