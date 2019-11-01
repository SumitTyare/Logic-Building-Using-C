/* 9. Write a program which accept two inputs from user and display below pattern.
Input : 4 4
Output : 
*	
*	*	
*	*	*	
*	*	*	*	

*/

#include<stdio.h>

void DisplayPattern(int, int);

void DisplayPattern(int iRowLength, int iColLength)
{
  int iRow = 0, iCol = 0;

  printf("\n");
  
  for(iRow = 1; iRow <= iRowLength; iRow++)
    {
      for(iCol = 1; (iCol <= iRow) && (iCol <= iColLength) ; iCol++)
	{
	  printf("*\t");	  
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
