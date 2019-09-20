/* 10. Accept array from user and check whether that array is sorted in increasing order or not. */

#include<stdio.h>
#include<malloc.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSortedASC(int[], int);

BOOL ChkSortedASC(int iArr[], int iLength)
{
  int iCnt = 0;
  BOOL bAns = FALSE;

  for(iCnt = 0, bAns = TRUE; iCnt < (iLength - 1); iCnt++)
    {
      if(iArr[iCnt] > iArr[iCnt + 1])
	{
	  bAns = FALSE;
	  break;
	}
    }
  
  return bAns;
}


int main(int argc, char* argv[])
{
  int *iArr = NULL;
  int iLength = 0, iCnt = 0;
  BOOL bAns = FALSE;
  
  printf("\nHOW MANY ELEMENTS IN ARRAY : ");
  scanf("%d", &iLength);
  iArr = (int *)malloc(iLength * sizeof(int));

  printf("\nENTER THE ELEMENTS OF ARRAY :\n");

  for(iCnt = 0; iCnt < iLength; iCnt++)
    {
      printf("\nENTER %d ELEMENT : ", iCnt);
      scanf("%d", &iArr[iCnt]);
    }

  
  bAns = ChkSortedASC(iArr, iLength);

  if(bAns == TRUE)
    {
      printf("\nARRAY IS SORTED IN ASCENDING ORDER...!!!\n");
    }
  else
    {
      printf("\nARRAY IS NOT SORTED IN ASCENDING ORDER...!!!\n");
    }

  return 0;
}
