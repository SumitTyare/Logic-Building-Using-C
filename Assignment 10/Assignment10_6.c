/* 6. Accept two arrays from user and display minimum element of each array. */

#include<stdio.h>
#include<malloc.h>

void ArrayMin(int[], int, int[], int);


void ArrayMin(int iArr1[], int iLength1, int iArr2[], int iLength2)
{
  int iCnt = 0, iMin1 = 0, iMin2 = 0;

  for(iCnt = 0, iMin1 = iArr1[iCnt]; iCnt < iLength1; iCnt++)
    {
      if(iArr1[iCnt] < iMin1)
	{
	  iMin1 = iArr1[iCnt];
	}
    }

  for(iCnt = 0, iMin2 = iArr2[iCnt]; iCnt < iLength2; iCnt++)
    {
      if(iArr2[iCnt] < iMin2)
	{
	  iMin2 = iArr2[iCnt];
	}
    }

  printf("\nMINIMUM ELEMENT IN ARRAY 1 IS : %d\n", iMin1);
  printf("\nMINIMUM ELEMENT IN ARRAY 2 IS : %d\n", iMin2);
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

  ArrayMin(iArr1, iLength1, iArr2, iLength2);
  
  return 0;
}
