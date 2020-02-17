/* 4. Write a program which print below pattern as
Input : 5
11 34 54 67 87

Output :

2	7	9	13	15	
2	7	9	13	15	
2	7	9	13	15	
2	7	9	13	15	
2	7	9	13	15	

*/

#include<stdio.h>
#include<stdlib.h>


void DisplayPattern(int *, int);

void DisplayPattern(int *iArr, int iLength)
{
  int iCnt1 = 0, iCnt2 = 0, iTemp = 0, iSum = 0;
  
  for(iCnt1 = 0; iCnt1 < iLength; iCnt1++)
    {
      for(iCnt2 = 0; iCnt2 < iLength; iCnt2++)
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
