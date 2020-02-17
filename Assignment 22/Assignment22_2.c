/* 2. Write a program which print below pattern as
Input : 5
32 65 78 45 90

Output :

32	65	78	45	90	
23	56	87	54	09	
32	65	78	45	90	
23	56	87	54	09	
32	65	78	45	90	

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
	  if((iCnt1 % 2) != 0)
	    {
	      iTemp = iArr[iCnt2];

	      while(iTemp != 0)
		{
		  printf("%d", (iTemp % 10));
		  iTemp = (iTemp / 10);
		}

	      printf("\t");
	    }
	  else
	    {
	      printf("%d\t", iArr[iCnt2]);
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
