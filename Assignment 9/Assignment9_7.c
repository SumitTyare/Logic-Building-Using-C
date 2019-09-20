/* 7. Accept N numbers from user and display such a digit which occurs maximum number of time in array. */

#include<stdio.h>
#include<malloc.h>

void DisplayMaxOccur(int [], int);

void DisplayMaxOccur(int iArr[], int iLength)
{
  int iCnt = 0, iIndex = 0, iMax = 0, iTemp = 0;
  int iBrr[10] = {0};
  
  for(iCnt = 0; iCnt < iLength; iCnt++)
    {
      iTemp = iArr[iCnt];
      while(iTemp != 0)
	{
	  iBrr[(iTemp % 10)]++;
	  iTemp = (iTemp / 10);
	}      
    }

  for(iCnt = 0; iCnt < 10; iCnt++)
    {
      if(iBrr[iCnt] > iMax)
	{
	  iIndex = iCnt;
	  iMax = iBrr[iCnt];
	}
    }

  printf("\nDIGIT %d OCCURS %d TIMES\n", iIndex, iMax);
}


int main(int argc, char* argv[])
{
  int *iArr = NULL;
  int iLength = 0, iCnt = 0;
  
  printf("\nHOW MANY ELEMENTS : ");
  scanf("%d", &iLength);

  iArr = (int *)malloc(iLength * sizeof(int));

  printf("\nENTER THE ELEMENTS :\n");

  for(iCnt = 0; iCnt < iLength; iCnt++)
    {
      printf("\nENTER %d ELEMENT : ", iCnt);
      scanf("%d", &iArr[iCnt]);
    }

  DisplayMaxOccur(iArr, iLength);

  return 0;
}
