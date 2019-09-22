/* 9. Accept array from user and check whether that array is palindrome or not. */

#include<stdio.h>
#include<malloc.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkArrayPalindrome(int[], int);


BOOL ChkArrayPalindrome(int iArr[], int iLength)
{
  int iStart = 0, iEnd = 0;
  BOOL bAns = FALSE;
  
  for(iStart = 0, iEnd = (iLength - 1), bAns = TRUE; iStart < iEnd; iStart++, iEnd--)
    {
      if(iArr[iStart] != iArr[iEnd])
	{
	  bAns = FALSE;
	  break;
	}
    }

  return bAns;
}

int main(int argc, char* argv[])
{
  int *iArr = NULL, iLength = 0, iCnt = 0;
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

  bAns = ChkArrayPalindrome(iArr, iLength);

  if(bAns == TRUE)
    {
      printf("\nARRAY IS PALINDROME...!!!\n");
    }
  else
    {
      printf("\nARRAY IS NOT PALINDROME...!!!\n");
    }
  
  return 0;
}



















