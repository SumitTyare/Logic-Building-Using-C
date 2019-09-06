/* 2. Write a program which accept number from user and print even factors of that number. */

#include<stdio.h>

void DisplayEvenFactors(int);

void DisplayEvenFactors(int iNum)
{
  int iCnt = 0;
  
  if(iNum < 0)
    {
      iNum = -iNum;
    }

  if((iNum % 2) == 0)
    {
      for(iCnt = 2; iCnt <= (iNum / 2); iCnt += 2)
	{
	  if((iNum % iCnt) == 0)
	    {
	      printf("%d\t", iCnt);
	    }
	}
      
      printf("\n");
    }
}


int main(int argc, char* argv[])
{
  int iNum = 0;
  
  printf("Enter Number=> ");
  scanf("%d", &iNum);

  DisplayEvenFactors(iNum);

  return 0;
}
