/* 10. Write a program which accept 7 number from user and return number which is nearest to 90 */

#include<stdio.h>
#include<malloc.h>
//header file for maximum integer limit macro i.e. INT_MAX
#include<limits.h>

#define CHECKNUM 90

int NearestNum(int [], int);

int NearestNum(int iArr[], int iNo)
{
  int iAns = 0, iDiff = 0, iCnt = 0, iPrevDiff = 0;

  for(iCnt = 0, iPrevDiff = INT_MAX; iCnt < iNo; iCnt++)
    {
      iDiff = iArr[iCnt] - CHECKNUM;

      if(iDiff < 0)
	{
	  iDiff = -(iDiff);
	}

      if(iDiff < iPrevDiff)
	{
	  iPrevDiff = iDiff;
	  iAns = iArr[iCnt];
	}
    }
  
  return iAns;
}


int main(int argc, char* argv[])
{
  int iNo = 0, iCnt = 0, iAns = 0;
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

  iAns = NearestNum(iArr, iNo);

  printf("\nNUMBER NEAR TO %d IS : %d\n", CHECKNUM, iAns);

  return 0;
}
