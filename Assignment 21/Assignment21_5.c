/* 5. Write a program which print below pattern as
Input : 5
32 45 78 90 61

Output :

32	0	32	0	32	
45	0	45	0	45	
78	0	78	0	78	
90	0	90	0	90	
61	0	61	0	61	

*/

#include<stdio.h>
#include<stdlib.h>


void DisplayPattern(int *, int);

void DisplayPattern(int *iArr, int iLength)
{
  int iCnt1 = 0, iCnt2 = 0;
  
  for(iCnt1 = 0; iCnt1 < iLength; iCnt1++)
    {
      for(iCnt2 = 0; iCnt2 < iLength; iCnt2++)
	{
	  if((iCnt2 % 2) == 0)
	    {
	      printf("%d\t", iArr[iCnt1]);
	    }
	  else
	    {
	      printf("0\t");
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
