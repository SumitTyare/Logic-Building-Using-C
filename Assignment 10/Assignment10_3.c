/* 3. Accept two arrays from user and form new array which is combination of contents of first and second array. */

#include<stdio.h>
#include<malloc.h>

void ArrayMerge(int[], int, int[], int);

void ArrayMerge(int iArr1[], int iLength1, int iArr2[], int iLength2)
{
  int *iMergeArray = NULL;
  int iCnt = 0, iCnt1 = 0, iCnt2 = 0;

  iMergeArray = (int *)malloc((iLength1 + iLength2) * sizeof(int));
  
  for(iCnt1 = 0, iCnt2 = 0; iCnt1 < (iLength1 + iLength2); iCnt1++, iCnt2++)
    {
      if(iCnt1 < iLength1)
	{
	  iMergeArray[iCnt1] = iArr1[iCnt2];
	}
    }

  for(iCnt1 = iLength1, iCnt2 = 0; iCnt1 < (iLength1 + iLength2); iCnt1++, iCnt2++)
    {
      iMergeArray[iCnt1] = iArr2[iCnt2];
    }

  printf("\nDISPLAYING ARRAY 1 & ARRAY 2 ELEMENTS IN MERGED ARRAY :\n");
  for(iCnt = 0; iCnt < (iLength1 + iLength2); iCnt++)
    {
      printf("%d\t", iMergeArray[iCnt]);
    }
  
  printf("\n");
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

  ArrayMerge(iArr1, iLength1, iArr2, iLength2);

  return 0;
}
