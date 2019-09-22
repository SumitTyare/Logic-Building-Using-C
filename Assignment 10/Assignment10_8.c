/* 8. Accept array from user and copy the contents of that array into another array and return base address of new array. */

#include<stdio.h>
#include<malloc.h>

int* ArrayCopy(int[], int);


int* ArrayCopy(int iArr[], int iLength)
{
  int *iAnsArr = NULL;
  int iCnt1 = 0, iCnt2 = 0;

  iAnsArr = (int *)malloc(iLength * sizeof(int));

  for(iCnt1 = 0, iCnt2 = 0; iCnt1 < iLength; iCnt1++, iCnt2++)
    {
      iAnsArr[iCnt2] = iArr[iCnt1];
    }

  return iAnsArr;
}

int main(int argc, char* argv[])
{
  int *iArr = NULL, *iAnsArr = NULL;
  int iLength = 0, iCnt = 0;
  
  printf("\nHOW MANY ELEMENTS IN ARRAY : ");
  scanf("%d", &iLength);
  iArr = (int *)malloc(iLength * sizeof(int));

  printf("\nENTER THE ELEMENTS OF ARRAY :\n");

  for(iCnt = 0; iCnt < iLength; iCnt++)
    {
      printf("\nENTER %d ELEMENT : ", iCnt);
      scanf("%d", &iArr[iCnt]);
    }

  iAnsArr = ArrayCopy(iArr, iLength);

  printf("\nNEW COPIED ARRAY OF GIVEN ARRAY :\n");
  for(iCnt = 0; iCnt < iLength; iCnt++)
    {
      printf("%d\t", iAnsArr[iCnt]);      
    }

  printf("\n");
  
  return 0;
}
