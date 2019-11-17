/* 4. Write a program which accept number from user and display below pattern
Input : 1234
Output :
4	3	2	1	
4	3	2	
4	3	
4
*/

#include<stdio.h>

void DisplayPattern(int);
int NumLen(int);

int NumLen(int iNum)
{
  int iNumLen = 0, iTemp = 0;

  iTemp = iNum;

  while(iTemp != 0)
    {
      iNumLen++;
      
      iTemp = (iTemp / 10);
    }
  
  return iNumLen;
}


void DisplayPattern(int iNum)
{
  int iTemp = 0, iCnt = 0, iNumLen = 0, iCounter = 0;

  iTemp = iNum;

  iNumLen = NumLen(iTemp);
  
  for(iCnt = 1; iCnt <= iNumLen; iCnt++)
    {
      iTemp = iNum;
      iCounter = iNumLen;
      
      while((iTemp != 0) && (iCounter >= iCnt))
	{
	  printf("%d\t", (iTemp % 10));
	  iTemp = (iTemp / 10);

	  iCounter--;
	}

      printf("\n");
    }

  printf("\n");
}



int main(int argc, char* argv[])
{
  int iNum = 0;
  
  printf("\nENTER NUMBER : ");
  scanf("%d", &iNum);

  DisplayPattern(iNum);
  
  return 0;
}
