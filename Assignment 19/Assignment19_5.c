/* 5. Write a program which accept two inputs from user and display below pattern.
Input : 6 6
Output :
$	@	@	@	@	@	
*	$	&	&	&	@	
*	#	$	&	&	@	
*	#	#	$	&	@	
*	#	#	#	$	@	
*	*	*	*	*	$	

*/

#include<stdio.h>

void DisplayPattern(int, int);

void DisplayPattern(int iRowLength, int iColLength)
{
  int iRow = 0, iCol = 0;
  
  for(iRow = 1; iRow <= iRowLength; iRow++)
    {
      for(iCol = 1; iCol <= iColLength; iCol++)
	{
	  if(iCol == iRow)
	    {
	      printf("$\t");
	    }
	  else if(((iRow == 1) || (iCol == iColLength)) && (iRow != iCol))
	    {
	      printf("@\t");
	    }
	  else if(((iRow == iRowLength) || (iCol == 1)) && (iRow != iCol))
	    {
	      printf("*\t");
	    }
	  else if((iCol < iRow) && (iCol != 1) && (iRow != iRowLength))
	    {
	      printf("#\t");
	    }
	  else if((iCol > iRow) && (iCol != iColLength) && (iRow != 1))
	    {
	      printf("&\t");
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
