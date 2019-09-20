/* 8. Accept two arrays from user and check whether that arrays are equal or not. */

#include<stdio.h>
#include<malloc.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEquality(int[], int, int[], int);

BOOL ChkEquality(int iArr1[], int iLength1, int iArr2[], int iLength2)
{
  int iCnt = 0;
  BOOL bAns = FALSE;
  
  if(iLength1 != iLength2)
    {
      bAns = FALSE;
    }
  else
    {
      for(iCnt = 0, bAns = TRUE; iCnt < iLength1; iCnt++)
	{
	  if(iArr1[iCnt] != iArr2[iCnt])
	    {
	      bAns = FALSE;
	      break;
	    }
	}
    }
  
  return bAns;
}


int main(int argc, char* argv[])
{
  int *iArr1 = NULL, *iArr2 = NULL;
  int iLength1 = 0, iLength2 = 0, iCnt = 0;
  BOOL bAns = FALSE;
  
  printf("\nHOW MANY ELEMENTS IN ARRAY 1 : ");
  scanf("%d", &iLength1);
  iArr1 = (int *)malloc(iLength1 * sizeof(int));

  printf("\nENTER THE ELEMENTS OF ARRAY 1 :\n");

  for(iCnt = 0; iCnt < iLength1; iCnt++)
    {
      printf("\nENTER %d ELEMENT : ", iCnt);
      scanf("%d", &iArr1[iCnt]);
    }

  printf("\nHOW MANY ELEMENTS IN ARRAY 2 : ");
  scanf("%d", &iLength2);
  iArr2 = (int *)malloc(iLength2 * sizeof(int));

  printf("\nENTER THE ELEMENTS OF ARRAY 2 :\n");

  for(iCnt = 0; iCnt < iLength2; iCnt++)
    {
      printf("\nENTER %d ELEMENT : ", iCnt);
      scanf("%d", &iArr2[iCnt]);
    }

  bAns = ChkEquality(iArr1, iLength1, iArr2, iLength2);

  if(bAns == TRUE)
    {
      printf("\nARRAYS ARE EQUAL...!!!\n");
    }
  else
    {
      printf("\nARRAYS ARE NOT EQUAL...!!!\n");
    }

  return 0;
}
