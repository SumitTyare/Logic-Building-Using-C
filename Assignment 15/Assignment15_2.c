/* 2. Write a program which accept input from user and display below pattern.
Input : 7
Output : A	b	C	d	E	f	G
*/

#include<stdio.h>

void DisplayPattern(int);

void DisplayPattern(int iNum)
{
  int iCnt = 0, iAlpha = 0;
  
  if(iNum < 0)
    {
      iNum = -(iNum);
    }

  for(iCnt = 1, iAlpha = 65; iCnt <= iNum; iCnt++, iAlpha++)
    {
      if((iCnt % 2) == 0)
	{
	  printf("%c\t", (iAlpha + 32));
	}
      else
	{
	  printf("%c\t", iAlpha);
	}
    }

  printf("\n");
}

int main(int argc, char* argv[])
{
  int iNum = 0;

  printf("\nENTER INPUT : ");
  scanf("%d", &iNum);

  DisplayPattern(iNum);
  
  return 0;
}
