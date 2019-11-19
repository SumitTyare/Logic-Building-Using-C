/* 2. Write a program which accept two inputs from user and display below pattern.
Input : 4 5
Output :
1	2	3	4	5	
5	4	3	2	1	
1	2	3	4	5	
5	4	3	2	1	

*/

#include<stdio.h>

void DisplayPattern(int, int);

void DisplayPattern(int iRowLength, int iColLength)
{
  int iRow = 0, iCol = 0, iCounter = 0;
  
  for(iRow = 1; iRow <= iRowLength; iRow++)
    {
      for(iCol = 1, iCounter = iColLength; iCol <= iColLength; iCol++)
	{
	  if((iRow % 2) != 0)
	    {
	      printf("%d\t", iCol);
	    }
	  else
	    {
	      printf("%d\t", iCounter);
	      iCounter--;
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
