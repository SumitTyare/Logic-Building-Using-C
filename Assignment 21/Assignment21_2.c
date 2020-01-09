/* 2. Write a program which print below pattern as
Input : 5
12 87 67 90 84

Output :

12	0	67	0	84	
84	0	67	0	12	
12	0	67	0	84	
84	0	67	0	12	
12	0	67	0	84	

*/

#include<stdio.h>
#include<stdlib.h>


void DisplayPattern(int *, int);

void DisplayPattern(int *iArr, int iLength)
{
  int iCnt1 = 0, iCnt2 = 0, iRevNum = 0;
  
  for(iCnt1 = 0; iCnt1 < iLength; iCnt1++)
    {
      for(iCnt2 = 0, iRevNum = (iLength - 1); iCnt2 < iLength; iCnt2++)
	{
	  if((iCnt1 % 2) == 0)
	    {
	      if((iCnt2 % 2) == 0)
		{
		  printf("%d\t", iArr[iCnt2]);
		}
	      else
		{
		  printf("0\t");
		}
	    }
	  else
	    {
	      if((iRevNum % 2) == 0)
		{
		  printf("%d\t", iArr[iRevNum]);
		}
	      else
		{
		  printf("0\t");
		}

	      iRevNum--;
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
