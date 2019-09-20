/* 3. Write a program which accept N numbers from user and return difference between summation of even numbers and summation of odd numbers. */

#include<stdio.h>
#include<malloc.h>

int EvenOddDiff(int [], int);

int EvenOddDiff(int iArr[], int iNo)
{
  int iCnt = 0, iEvenSum = 0, iOddSum = 0;

  for(iCnt = 0; iCnt < iNo; iCnt++)
    {
      if((iArr[iCnt] % 2) == 0)
	{
	  iEvenSum = iEvenSum + iArr[iCnt];
	}
      else
	{
	  iOddSum = iOddSum + iArr[iCnt];
	}
    }

  return (iEvenSum - iOddSum);
}


int main(int argc, char* argv[])
{
  int *iArr = NULL;
  int iNo = 0, iCnt = 0, iAns = 0;
  
  printf("\nHOW MANY ELEMENTS : ");
  scanf("%d", &iNo);

  iArr = (int *)malloc(iNo * sizeof(int));

  printf("\nENTER THE ELEMENTS :\n");

  for(iCnt = 0; iCnt < iNo; iCnt++)
    {
      printf("\nENTER %d ELEMENT : ", iCnt);
      scanf("%d", &iArr[iCnt]);
    }

  iAns = EvenOddDiff(iArr, iNo);

  printf("\nDIFFERENCE BETWEEN EVEN NUMBER SUM & ODD NUMBER SUM IS : %d\n", iAns);

  return 0;
}
