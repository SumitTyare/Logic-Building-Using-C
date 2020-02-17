/* 1. Write a program which print below pattern as
Input : 5
12 32 76 89 54

Output :

21	23	67	98	45	
21	23	67	98	45	
21	23	67	98	45	
21	23	67	98	45	
21	23	67	98	45	

*/

#include<stdio.h>
#include<stdlib.h>


void DisplayPattern(int *, int);

void DisplayPattern(int *iArr, int iLength)
{
  int iCnt1 = 0, iCnt2 = 0, iTemp = 0;
  
  for(iCnt1 = 0; iCnt1 < iLength; iCnt1++)
    {
      for(iCnt2 = 0; iCnt2 < iLength; iCnt2++)
	{
	  iTemp = iArr[iCnt2];

	  while(iTemp != 0)
	    {
	      printf("%d", (iTemp % 10));
	      iTemp = (iTemp / 10);
	    }

	  printf("\t");
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
