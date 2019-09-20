/* 4. Write a program which accept N numbers from user and one number. Display all elements of array which are divisible by that number. */

#include<stdio.h>
#include<malloc.h>

void DisplayDivisible(int [], int, int);

void DisplayDivisible(int iArr[], int iLength, int iNum)
{
  int iCnt = 0;

  printf("\nARRAY WHICH IS DIVISIBLE BY NUMBER %d :\n", iNum);
  
  for(iCnt = 0; iCnt < iLength; iCnt++)
    {
      if((iArr[iCnt] % iNum) == 0)
	{
	  printf("%d\t", iArr[iCnt]);
	}
    }

  printf("\n");
}


int main(int argc, char* argv[])
{
  int *iArr = NULL;
  int iLength = 0, iCnt = 0, iNum = 0;
  
  printf("\nHOW MANY ELEMENTS : ");
  scanf("%d", &iLength);

  iArr = (int *)malloc(iLength * sizeof(int));

  printf("\nENTER THE ELEMENTS :\n");

  for(iCnt = 0; iCnt < iLength; iCnt++)
    {
      printf("\nENTER %d ELEMENT : ", iCnt);
      scanf("%d", &iArr[iCnt]);
    }

  printf("\nENTER THE NUMBER YOU WANT TO CHECK FOR DIVISIBILITY : ");
  scanf("%d", &iNum);

  DisplayDivisible(iArr, iLength, iNum);

  
  return 0;
}
