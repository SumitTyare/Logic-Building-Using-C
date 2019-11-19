/* 1. Write a program which accept two inputs from user and display below pattern.
Input : 4 5
Output :
A	B	C	D	E	
A	0	0	0	E	
A	0	0	0	E	
A	B	C	D	E	

*/

#include<stdio.h>

void DisplayPattern(int, int);

void DisplayPattern(int iRowLength, int iColLength)
{
  int iRow = 0, iCol = 0, iAlpha = 0;
  
  for(iRow = 1; iRow <= iRowLength; iRow++)
    {
      for(iCol = 1, iAlpha = 65; iCol <= iColLength; iCol++, iAlpha++)
	{
	  if((iRow == 1) || (iRow == iRowLength) || (iCol == 1) || (iCol == iColLength))
	    {
	      printf("%c\t", iAlpha);
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
  int iNum1 = 0, iNum2 = 0;
  
  printf("\nENTER INPUT : ");
  scanf("%d%d", &iNum1, &iNum2);

  DisplayPattern(iNum1, iNum2);

  return 0;  
}
