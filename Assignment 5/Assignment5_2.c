/* 2. Accept number from user and print below pattern.
Input : 4
Output : * * * * # # # #
*/

#include<stdio.h>

void DisplayPattern(int);

void DisplayPattern(int iNum)
{
  int iCnt = 0;
  
  for(iCnt = 1; iCnt <= (iNum * 2); iCnt++)
    {
      if(iCnt <= iNum)
	{
	  printf("*\t");
	}
      else
	{
	  printf("#\t");
	}
    }

  printf("\n");
}

int main(int argc, char *argv[])
{
  int iNum = 0;
  
  printf("\nENTER THE NUMBER : ");
  scanf("%d", &iNum);

  DisplayPattern(iNum);
  
  return 0;
}
