/* 9. Accept two arrays from user and return difference between summation of elements of first array and summation of elements of second array. */

#include<stdio.h>
#include<malloc.h>

int SumDiff(int[], int, int[], int);

int SumDiff(int iArr1[], int iLength1, int iArr2[], int iLength2)
{
  int iCnt = 0, iSum1 = 0, iSum2 = 0;

  for(iCnt = 0; iCnt < iLength1; iCnt++)
    {
      iSum1 = iSum1 + iArr1[iCnt];
    }

  for(iCnt = 0; iCnt < iLength2; iCnt++)
    {
      iSum2 = iSum2 + iArr2[iCnt];
    }

  return (iSum1 - iSum2);
}


int main(int argc, char* argv[])
{
  int *iArr1 = NULL, *iArr2 = NULL;
  int iLength1 = 0, iLength2 = 0, iCnt = 0, iDiff = 0;
  
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

  iDiff = SumDiff(iArr1, iLength1, iArr2, iLength2);

  printf("\nDIFFERENCE OF SUMMASION OF ARRAY 1 & ARRAY 2 IS : %d\n", iDiff);

  return 0;
}
