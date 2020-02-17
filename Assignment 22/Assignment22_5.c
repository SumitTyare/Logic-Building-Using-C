/* 5. Write a program which print below pattern as
Input : 5
21 31 54 70 65

Output :

3	4	9	7	11	
3	0	0	0	11	
3	0	0	0	11	
3	0	0	0	11	
3	4	9	7	11	

*/

#include<stdio.h>
#include<stdlib.h>


void DisplayPattern(int *, int);

void DisplayPattern(int *iArr, int iLength)
{
  int iCnt1 = 0, iCnt2 = 0, iTemp = 0, iSum = 0;
  
  for(iCnt1 = 1; iCnt1 <= iLength; iCnt1++)
    {
      for(iCnt2 = 0; iCnt2 < iLength; iCnt2++)
	{
	  if((iCnt1 == 1) || (iCnt1 == iLength) || (iCnt2 == 0) || (iCnt2 == (iLength - 1)))
	    {
	      iTemp = iArr[iCnt2];
	      iSum = 0;

	      while(iTemp != 0)
		{
		  iSum = iSum + (iTemp % 10);

		  iTemp = (iTemp / 10);
		}

	      printf("%d\t", iSum);
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
