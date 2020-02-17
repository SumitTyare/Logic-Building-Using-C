/* 3. Write a program which print below pattern as
Input : 10
12 31 44 66 88 91 54 76 77 43

Output :

12	44	66	88	54	76	
12	44	66	88	54	76	
12	44	66	88	54	76	
12	44	66	88	54	76	
12	44	66	88	54	76	
12	44	66	88	54	76	
12	44	66	88	54	76	
12	44	66	88	54	76	
12	44	66	88	54	76	
12	44	66	88	54	76

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
	  if((iArr[iCnt2] % 2) == 0)
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
