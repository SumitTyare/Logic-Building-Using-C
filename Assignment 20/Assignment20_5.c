/* 5. Write a program which print below pattern as
Input : 5
12 32 45 67 87
Output :
12	32	45	67	87	
12	0	0	0	87	
12	0	0	0	87	
12	0	0	0	87	
12	32	45	67	87	

*/

#include<stdio.h>
#include<stdlib.h>


void DisplayPattern(int *, int);

void DisplayPattern(int *iArr, int iLength)
{
  int iCnt1 = 0, iCnt2 = 0;
  
  for(iCnt1 = 1; iCnt1 <= iLength; iCnt1++)
    {
      for(iCnt2 = 0; iCnt2 < iLength; iCnt2++)
	{
	  if((iCnt1 == 1) || (iCnt1 == iLength) || (iCnt2 == 0) || (iCnt2 == (iLength - 1)))
	    {
	      printf("%d\t", iArr[iCnt2]);
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
