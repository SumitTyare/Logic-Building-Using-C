/* 5. Accept N numbers from user and reverse the contents of that array. */

#include<stdio.h>
#include<malloc.h>

void ReverseArray(int [], int);

void ReverseArray(int iArr[], int iLength)
{
  int iStart = 0, iEnd = 0, iTemp = 0;

  for(iStart = 0, iEnd = (iLength - 1); iStart < iEnd; iStart++, iEnd--)
    {
      iTemp = iArr[iStart];
      iArr[iStart] = iArr[iEnd];
      iArr[iEnd] = iTemp;
    }
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

  ReverseArray(iArr, iLength);

  printf("\nARRAY AFTER REVERS :\n");

  for(iCnt = 0; iCnt < iLength; iCnt++)
    {
      printf("%d\t", iArr[iCnt]);
    }

  printf("\n");
  
  return 0;
}
