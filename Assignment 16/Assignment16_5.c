/* 5. Write a program which accept two inputs from user and display below pattern.
Input : 5 5
Output : 
1	*	*	*	*	
2	3	*	*	*	
4	5	6	*	*	
7	8	9	10	*	
11	12	13	14	15	

*/

#include<stdio.h>

void DisplayPattern(int, int);

void DisplayPattern(int iRowLength, int iColLength)
{
  int iRow = 0, iCol = 0, iCounter = 0;

  printf("\n");
  
  for(iRow = 1, iCounter = 1; iRow <= iRowLength; iRow++)
    {
      for(iCol = 1; iCol <= iColLength; iCol++)
	{
	  if(iCol <= iRow)
	    {
	      printf("%d\t", iCounter);
	      iCounter++;
	    }
	  else
	    {
	      printf("*\t");
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
