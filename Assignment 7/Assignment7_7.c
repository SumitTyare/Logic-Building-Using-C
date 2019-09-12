/* 7. Accept one numbers from user and display below pattern as.
Input : 3
Output : 3###2##1#
*/

#include<stdio.h>

void DisplayPattern(int);

void DisplayPattern(int iNo)
{
  int iCnt1 = 0, iCnt2 = 0;
  
  for(iCnt1 = iNo; iCnt1 != 0; iCnt1--)
    {
      printf("%d", iCnt1);

      for(iCnt2 = 1; iCnt2 <= iCnt1; iCnt2++)
	{
	  printf("#");
	}
    }

  printf("\n");
}


int main(int argc, char* argv[])
{
  int iNo = 0;

  printf("\nENTER THE NUMBER : ");
  scanf("%d", &iNo);

  DisplayPattern(iNo);

  return 0;
}
