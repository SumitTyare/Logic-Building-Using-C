/* 3. Write a program which print below pattern as
Input : 5
12 56 78 90 54
Output :
12	56	78	90	54	
12	56	78	90	
12	56	78	
12	56	
12

*/

#include<stdio.h>
#include<stdlib.h>


void DisplayPattern(int *, int);

void DisplayPattern(int *iArr, int iLength)
{
  int iCnt1 = 0, iCnt2 = 0;
  
  for(iCnt1 = 1; iCnt1 <= iLength; iCnt1++)
    {
      for(iCnt2 = 0; (iCnt2 <= (iLength - iCnt1)); iCnt2++)
	{
	  printf("%d\t", iArr[iCnt2]);	  
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
