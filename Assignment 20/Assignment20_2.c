/* 2. Write a program which print below pattern as
Input : 5
12 34 56 32 90

Output :
12	34	56	32	90	
90	32	56	34	12	
12	34	56	32	90	
90	32	56	34	12	
12	34	56	32	90	

*/

#include<stdio.h>
#include<stdlib.h>


void DisplayPattern(int *, int);

void DisplayPattern(int *iArr, int iLength)
{
  int iCnt1 = 0, iCnt2 = 0, iRevIndex = 0;
  
  for(iCnt1 = 1; iCnt1 <= iLength; iCnt1++)
    {
      for(iCnt2 = 0, iRevIndex = (iLength - 1); iCnt2 < iLength; iCnt2++)
	{
	  if((iCnt1 % 2) != 0)
	    {
	      printf("%d\t", iArr[iCnt2]);
	    }
	  else
	    {
	      printf("%d\t", iArr[iRevIndex]);
	      iRevIndex--;
	    }
	}

      printf("\n");
    }

  printf("\n");
}


int main(int argc, char* argv[])
{
  int iCnt = 0, iLength = 0, *iArr = NULL;
  
  printf("\nHOW MANY ELEMENTS IN ARRAY : ");
  scanf("%d", &iLength);

  iArr = (int *)malloc(iLength * sizeof(int));
  
  printf("\nENTER ELEMENTS :\n");

  for(iCnt = 0; iCnt < iLength; iCnt++)
    {
      scanf("%d", &iArr[iCnt]);
    }

  DisplayPattern(iArr, iLength);
  
  return 0;
}
